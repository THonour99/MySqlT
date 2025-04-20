#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QMessageBox>
#include <QDebug>
#include <QFileDialog>
#include <QBuffer>
#include <QPixmap>
#include <QVBoxLayout>
#include <QDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , queryModel(nullptr)
    , photoData()
    , currentPhotoPath("")
{
    ui->setupUi(this);
    
    // 创建查询模型
    queryModel = new QSqlQueryModel(this);
    ui->tableView_results->setModel(queryModel);
    
    // 初始状态设置
    ui->pushButton_disconnect->setEnabled(false);
    ui->pushButton_initTable->setEnabled(false);
    ui->groupBox_studentInfo->setEnabled(false);
    ui->groupBox_results->setEnabled(false);
    
    // 尝试自动连接数据库
    initDatabase();
}

MainWindow::~MainWindow()
{
    // 确保在对象销毁时关闭数据库连接
    if (db.isOpen()) {
        db.close();
        qDebug() << "数据库连接已关闭。";
    }
    delete ui;
}

void MainWindow::initDatabase()
{
    // 配置数据库连接
    db = QSqlDatabase::addDatabase("QODBC", "myConnection");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("mydatabase"); // 请替换为你的数据库名
    db.setUserName("root");
    db.setPassword("2231251128");
    
    // 尝试自动连接
    on_pushButton_connect_clicked();
}

void MainWindow::updateConnectionStatus()
{
    bool isConnected = db.isOpen();
    
    // 更新UI状态
    ui->label_connection_status->setText(isConnected ? "已连接" : "未连接");
    ui->pushButton_connect->setEnabled(!isConnected);
    ui->pushButton_disconnect->setEnabled(isConnected);
    ui->pushButton_initTable->setEnabled(isConnected);
    ui->groupBox_studentInfo->setEnabled(isConnected);
    ui->groupBox_results->setEnabled(isConnected);
    
    // 更新状态栏消息
    ui->label_status_message->setText(isConnected ? 
        "已连接到数据库: " + db.databaseName() : "数据库未连接");
        
    // 如果连接成功，加载学生数据
    if (isConnected) {
        loadStudentData();
    }
}

void MainWindow::on_pushButton_connect_clicked()
{
    if (!db.isOpen()) {
        if (db.open()) {
            qDebug() << "数据库连接成功！(连接名: myConnection)";
            ui->label_status_message->setText("数据库连接成功！");
        } else {
            QString errorMsg = db.lastError().text();
            qDebug() << "数据库连接失败：" << errorMsg;
            ui->label_status_message->setText("连接失败：" + errorMsg);
            QMessageBox::critical(this, "连接错误", 
                "无法连接到数据库：\n" + errorMsg);
        }
    }
    
    updateConnectionStatus();
}

void MainWindow::on_pushButton_disconnect_clicked()
{
    if (db.isOpen()) {
        db.close();
        qDebug() << "数据库连接已关闭。";
        ui->label_status_message->setText("数据库连接已关闭");
    }
    
    updateConnectionStatus();
}

void MainWindow::on_pushButton_initTable_clicked()
{
    if (!db.isOpen()) {
        QMessageBox::warning(this, "未连接", "请先连接到数据库！");
        return;
    }
    
    if (createStudentTable()) {
        QMessageBox::information(this, "成功", "学生表创建成功！");
        loadStudentData();
    }
}

bool MainWindow::createStudentTable()
{
    QSqlQuery query(db);
    
    // 创建学生表，包含学号、姓名、年龄、性别、班级和照片字段
    QString createTableSQL = 
        "CREATE TABLE IF NOT EXISTS students ("
        "id VARCHAR(20) PRIMARY KEY, "
        "name VARCHAR(50) NOT NULL, "
        "age INT, "
        "gender VARCHAR(10), "
        "class VARCHAR(50), "
        "photo LONGBLOB"
        ")";
    
    if (!query.exec(createTableSQL)) {
        QMessageBox::critical(this, "错误", "创建表失败：" + query.lastError().text());
        return false;
    }
    
    return true;
}

void MainWindow::on_pushButton_save_clicked()
{
    if (!db.isOpen()) {
        QMessageBox::warning(this, "未连接", "请先连接到数据库！");
        return;
    }
    
    // 获取输入数据
    QString id = ui->lineEdit_id->text().trimmed();
    QString name = ui->lineEdit_name->text().trimmed();
    int age = ui->spinBox_age->value();
    QString gender = ui->radioButton_male->isChecked() ? "男" : "女";
    QString className = ui->lineEdit_class->text().trimmed();
    
    // 验证必填字段
    if (id.isEmpty() || name.isEmpty()) {
        QMessageBox::warning(this, "数据不完整", "学号和姓名为必填项！");
        return;
    }
    
    QSqlQuery query(db);
    
    // 先检查是否存在相同学号
    query.prepare("SELECT id FROM students WHERE id = ?");
    query.addBindValue(id);
    query.exec();
    
    bool isUpdate = query.next(); // 如果有结果，说明是更新操作
    
    // 准备SQL语句（插入或更新）
    if (isUpdate) {
        query.prepare("UPDATE students SET name = ?, age = ?, gender = ?, class = ?, photo = ? WHERE id = ?");
        query.addBindValue(name);
        query.addBindValue(age);
        query.addBindValue(gender);
        query.addBindValue(className);
        query.addBindValue(photoData);
        query.addBindValue(id);
    } else {
        query.prepare("INSERT INTO students (id, name, age, gender, class, photo) VALUES (?, ?, ?, ?, ?, ?)");
        query.addBindValue(id);
        query.addBindValue(name);
        query.addBindValue(age);
        query.addBindValue(gender);
        query.addBindValue(className);
        query.addBindValue(photoData);
    }
    
    if (query.exec()) {
        ui->label_status_message->setText(isUpdate ? "学生信息更新成功！" : "学生信息添加成功！");
        refreshTable();
        clearInputFields();
    } else {
        QMessageBox::critical(this, "错误", 
            (isUpdate ? "更新" : "添加") + QString("学生信息失败：") + query.lastError().text());
    }
}

void MainWindow::on_pushButton_clear_clicked()
{
    clearInputFields();
}

void MainWindow::clearInputFields()
{
    ui->lineEdit_id->clear();
    ui->lineEdit_name->clear();
    ui->spinBox_age->setValue(18);
    ui->radioButton_male->setChecked(true);
    ui->lineEdit_class->clear();
    ui->label_photoPreview->setText("照片预览");
    ui->label_photoPreview->setPixmap(QPixmap());
    photoData.clear();
    currentPhotoPath.clear();
}

void MainWindow::on_pushButton_selectPhoto_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "选择照片", 
        "", "图像文件 (*.png *.jpg *.jpeg *.bmp)");
    
    if (!fileName.isEmpty()) {
        QPixmap pixmap(fileName);
        if (pixmap.isNull()) {
            QMessageBox::warning(this, "错误", "无法加载所选图像！");
            return;
        }
        
        // 调整图像大小以适应标签
        QPixmap scaledPixmap = pixmap.scaled(ui->label_photoPreview->size(), 
            Qt::KeepAspectRatio, Qt::SmoothTransformation);
        
        // 在标签上显示图像
        ui->label_photoPreview->setPixmap(scaledPixmap);
        ui->label_photoPreview->setScaledContents(true);
        
        // 将图像转换为字节数组
        QBuffer buffer(&photoData);
        buffer.open(QIODevice::WriteOnly);
        pixmap.save(&buffer, "JPEG");
        
        currentPhotoPath = fileName;
    }
}

void MainWindow::loadStudentData()
{
    if (!db.isOpen()) {
        return;
    }
    
    // 检查表是否存在
    QSqlQuery query(db);
    query.exec("SHOW TABLES LIKE 'students'");
    if (!query.next()) {
        // 表不存在
        ui->label_status_message->setText("学生表不存在，请点击'初始化表'按钮创建");
        return;
    }
    
    refreshTable();
}

void MainWindow::refreshTable()
{
    // 查询所有学生信息（不包括照片，以提高性能）
    queryModel->setQuery("SELECT id as '学号', name as '姓名', age as '年龄', "
                         "gender as '性别', class as '班级' FROM students", db);
    
    if (queryModel->lastError().isValid()) {
        QMessageBox::warning(this, "查询错误", queryModel->lastError().text());
    }
    
    ui->tableView_results->resizeColumnsToContents();
}

void MainWindow::on_pushButton_search_clicked()
{
    QString searchText = ui->lineEdit_search->text().trimmed();
    if (searchText.isEmpty()) {
        refreshTable();
        return;
    }
    
    // 使用LIKE进行模糊查询
    QString sql = QString("SELECT id as '学号', name as '姓名', age as '年龄', "
                          "gender as '性别', class as '班级' FROM students "
                          "WHERE id LIKE '%%1%' OR name LIKE '%%1%' OR class LIKE '%%1%'")
                          .arg(searchText);
    
    queryModel->setQuery(sql, db);
    
    if (queryModel->lastError().isValid()) {
        QMessageBox::warning(this, "查询错误", queryModel->lastError().text());
    } else {
        ui->label_status_message->setText(
            QString("找到 %1 条匹配记录").arg(queryModel->rowCount()));
    }
    
    ui->tableView_results->resizeColumnsToContents();
}

void MainWindow::on_pushButton_showAll_clicked()
{
    ui->lineEdit_search->clear();
    refreshTable();
}

void MainWindow::on_tableView_results_clicked(const QModelIndex &index)
{
    if (!index.isValid())
        return;
    
    // 获取选中行的学号
    int row = index.row();
    QString studentId = queryModel->record(row).value("学号").toString();
    
    // 查询完整的学生信息，包括照片
    QSqlQuery query(db);
    query.prepare("SELECT * FROM students WHERE id = ?");
    query.addBindValue(studentId);
    
    if (query.exec() && query.next()) {
        // 填充输入字段
        ui->lineEdit_id->setText(query.value("id").toString());
        ui->lineEdit_name->setText(query.value("name").toString());
        ui->spinBox_age->setValue(query.value("age").toInt());
        ui->radioButton_male->setChecked(query.value("gender").toString() == "男");
        ui->radioButton_female->setChecked(query.value("gender").toString() == "女");
        ui->lineEdit_class->setText(query.value("class").toString());
        
        // 处理照片
        QByteArray imgData = query.value("photo").toByteArray();
        photoData = imgData;
        
        if (!imgData.isEmpty()) {
            QPixmap pixmap;
            pixmap.loadFromData(imgData);
            if (!pixmap.isNull()) {
                QPixmap scaledPixmap = pixmap.scaled(ui->label_photoPreview->size(), 
                    Qt::KeepAspectRatio, Qt::SmoothTransformation);
                ui->label_photoPreview->setPixmap(scaledPixmap);
                ui->label_photoPreview->setScaledContents(true);
            } else {
                ui->label_photoPreview->setText("照片预览");
                ui->label_photoPreview->setPixmap(QPixmap());
            }
        } else {
            ui->label_photoPreview->setText("照片预览");
            ui->label_photoPreview->setPixmap(QPixmap());
        }
    }
}

void MainWindow::on_pushButton_loadPhoto_clicked()
{
    QModelIndex index = ui->tableView_results->currentIndex();
    if (!index.isValid()) {
        QMessageBox::information(this, "提示", "请先选择一条学生记录");
        return;
    }
    
    int row = index.row();
    QString studentId = queryModel->record(row).value("学号").toString();
    
    QSqlQuery query(db);
    query.prepare("SELECT photo FROM students WHERE id = ?");
    query.addBindValue(studentId);
    
    if (query.exec() && query.next()) {
        QByteArray imgData = query.value("photo").toByteArray();
        
        if (imgData.isEmpty()) {
            QMessageBox::information(this, "提示", "该学生没有照片");
            return;
        }
        
        // 创建并显示大图
        QPixmap pixmap;
        if (pixmap.loadFromData(imgData)) {
            // 考虑使用QDialog或QLabel显示大图，这里使用简单的消息框
            QDialog *dialog = new QDialog(this);
            dialog->setWindowTitle("学生照片");
            QVBoxLayout *layout = new QVBoxLayout(dialog);
            QLabel *imageLabel = new QLabel(dialog);
            imageLabel->setPixmap(pixmap);
            imageLabel->setAlignment(Qt::AlignCenter);
            layout->addWidget(imageLabel);
            dialog->setLayout(layout);
            dialog->resize(pixmap.width() + 50, pixmap.height() + 50);
            dialog->exec();
            delete dialog;
        } else {
            QMessageBox::warning(this, "错误", "无法加载照片数据");
        }
    }
}

void MainWindow::on_pushButton_delete_clicked()
{
    QModelIndex index = ui->tableView_results->currentIndex();
    if (!index.isValid()) {
        QMessageBox::information(this, "提示", "请先选择一条学生记录");
        return;
    }
    
    int row = index.row();
    QString studentId = queryModel->record(row).value("学号").toString();
    QString studentName = queryModel->record(row).value("姓名").toString();
    
    // 确认删除
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认删除", 
                                 QString("确定要删除学号为 %1 的学生 %2 吗?").arg(studentId).arg(studentName),
                                 QMessageBox::Yes | QMessageBox::No);
    
    if (reply == QMessageBox::Yes) {
        QSqlQuery query(db);
        query.prepare("DELETE FROM students WHERE id = ?");
        query.addBindValue(studentId);
        
        if (query.exec()) {
            QMessageBox::information(this, "成功", "学生信息删除成功");
            refreshTable();
            clearInputFields();
        } else {
            QMessageBox::critical(this, "错误", "删除失败: " + query.lastError().text());
        }
    }
}

void MainWindow::on_action_exit_triggered()
{
    close(); // 关闭应用程序
}
