#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , queryModel(nullptr) // 初始化查询模型为nullptr
{
    ui->setupUi(this);
    
    // 创建查询模型
    queryModel = new QSqlQueryModel(this);
    ui->tableView_results->setModel(queryModel);
    
    // 初始状态设置
    ui->pushButton_disconnect->setEnabled(false);
    ui->pushButton_executeQuery->setEnabled(false);
    
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
    ui->pushButton_executeQuery->setEnabled(isConnected);
    ui->groupBox_query->setEnabled(isConnected);
    
    // 更新状态栏消息
    ui->label_status_message->setText(isConnected ? 
        "已连接到数据库: " + db.databaseName() : "数据库未连接");
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

void MainWindow::on_pushButton_executeQuery_clicked()
{
    if (!db.isOpen()) {
        QMessageBox::warning(this, "未连接", "请先连接到数据库！");
        return;
    }
    
    QString queryStr = ui->plainTextEdit_query->toPlainText().trimmed();
    if (queryStr.isEmpty()) {
        QMessageBox::information(this, "空查询", "请输入SQL查询语句");
        return;
    }
    
    // 执行查询
    queryModel->setQuery(queryStr, db);
    
    // 检查是否有错误
    if (queryModel->lastError().isValid()) {
        QString errorMsg = queryModel->lastError().text();
        ui->label_status_message->setText("查询错误：" + errorMsg);
        QMessageBox::warning(this, "查询错误", errorMsg);
    } else {
        int rowCount = queryModel->rowCount();
        ui->label_status_message->setText(
            QString("查询成功，返回 %1 行结果").arg(rowCount));
        
        // 如果是非SELECT查询，显示影响的行数
        if (rowCount == 0) {
            QSqlQuery query(db);
            query.exec(queryStr);
            int affectedRows = query.numRowsAffected();
            if (affectedRows >= 0) {
                ui->label_status_message->setText(
                    QString("操作成功，影响了 %1 行").arg(affectedRows));
            }
        }
    }
}

void MainWindow::on_pushButton_clearQuery_clicked()
{
    ui->plainTextEdit_query->clear();
}

void MainWindow::on_action_exit_triggered()
{
    close(); // 关闭应用程序
}
