#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QPixmap>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_connect_clicked();
    void on_pushButton_disconnect_clicked();
    void on_pushButton_initTable_clicked();
    void on_pushButton_save_clicked();
    void on_pushButton_clear_clicked();
    void on_pushButton_selectPhoto_clicked();
    void on_pushButton_search_clicked();
    void on_pushButton_showAll_clicked();
    void on_pushButton_loadPhoto_clicked();
    void on_pushButton_delete_clicked();
    void on_action_exit_triggered();
    void on_tableView_results_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlQueryModel *queryModel;
    QByteArray photoData; // 存储当前选择的照片数据
    QString currentPhotoPath; // 当前照片路径
    
    void initDatabase();
    void updateConnectionStatus();
    void loadStudentData(); // 加载所有学生数据
    void clearInputFields(); // 清空输入字段
    void refreshTable(); // 刷新学生表格
    bool createStudentTable(); // 创建学生表
};
#endif // MAINWINDOW_H
