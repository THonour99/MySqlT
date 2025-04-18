/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_exit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_connection;
    QHBoxLayout *horizontalLayout;
    QLabel *label_status;
    QLabel *label_connection_status;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_disconnect;
    QGroupBox *groupBox_query;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit_query;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_executeQuery;
    QPushButton *pushButton_clearQuery;
    QGroupBox *groupBox_results;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView_results;
    QLabel *label_status_message;
    QMenuBar *menubar;
    QMenu *menu_file;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QString::fromUtf8("action_exit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_connection = new QGroupBox(centralwidget);
        groupBox_connection->setObjectName(QString::fromUtf8("groupBox_connection"));
        horizontalLayout = new QHBoxLayout(groupBox_connection);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_status = new QLabel(groupBox_connection);
        label_status->setObjectName(QString::fromUtf8("label_status"));

        horizontalLayout->addWidget(label_status);

        label_connection_status = new QLabel(groupBox_connection);
        label_connection_status->setObjectName(QString::fromUtf8("label_connection_status"));
        label_connection_status->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_connection_status);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_connect = new QPushButton(groupBox_connection);
        pushButton_connect->setObjectName(QString::fromUtf8("pushButton_connect"));

        horizontalLayout->addWidget(pushButton_connect);

        pushButton_disconnect = new QPushButton(groupBox_connection);
        pushButton_disconnect->setObjectName(QString::fromUtf8("pushButton_disconnect"));

        horizontalLayout->addWidget(pushButton_disconnect);


        verticalLayout->addWidget(groupBox_connection);

        groupBox_query = new QGroupBox(centralwidget);
        groupBox_query->setObjectName(QString::fromUtf8("groupBox_query"));
        verticalLayout_2 = new QVBoxLayout(groupBox_query);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        plainTextEdit_query = new QPlainTextEdit(groupBox_query);
        plainTextEdit_query->setObjectName(QString::fromUtf8("plainTextEdit_query"));

        verticalLayout_2->addWidget(plainTextEdit_query);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_executeQuery = new QPushButton(groupBox_query);
        pushButton_executeQuery->setObjectName(QString::fromUtf8("pushButton_executeQuery"));

        horizontalLayout_2->addWidget(pushButton_executeQuery);

        pushButton_clearQuery = new QPushButton(groupBox_query);
        pushButton_clearQuery->setObjectName(QString::fromUtf8("pushButton_clearQuery"));

        horizontalLayout_2->addWidget(pushButton_clearQuery);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox_query);

        groupBox_results = new QGroupBox(centralwidget);
        groupBox_results->setObjectName(QString::fromUtf8("groupBox_results"));
        verticalLayout_3 = new QVBoxLayout(groupBox_results);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableView_results = new QTableView(groupBox_results);
        tableView_results->setObjectName(QString::fromUtf8("tableView_results"));

        verticalLayout_3->addWidget(tableView_results);


        verticalLayout->addWidget(groupBox_results);

        label_status_message = new QLabel(centralwidget);
        label_status_message->setObjectName(QString::fromUtf8("label_status_message"));

        verticalLayout->addWidget(label_status_message);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu_file = new QMenu(menubar);
        menu_file->setObjectName(QString::fromUtf8("menu_file"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_file->menuAction());
        menu_file->addAction(action_exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MySQL\346\225\260\346\215\256\345\272\223\347\256\241\347\220\206", nullptr));
        action_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        groupBox_connection->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\350\277\236\346\216\245", nullptr));
        label_status->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\347\212\266\346\200\201\357\274\232", nullptr));
        label_connection_status->setText(QCoreApplication::translate("MainWindow", "\346\234\252\350\277\236\346\216\245", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\346\225\260\346\215\256\345\272\223", nullptr));
        pushButton_disconnect->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        groupBox_query->setTitle(QCoreApplication::translate("MainWindow", "SQL\346\237\245\350\257\242", nullptr));
        plainTextEdit_query->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\234\250\346\255\244\350\276\223\345\205\245SQL\346\237\245\350\257\242\350\257\255\345\217\245...", nullptr));
        pushButton_executeQuery->setText(QCoreApplication::translate("MainWindow", "\346\211\247\350\241\214\346\237\245\350\257\242", nullptr));
        pushButton_clearQuery->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        groupBox_results->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\347\273\223\346\236\234", nullptr));
        label_status_message->setText(QCoreApplication::translate("MainWindow", "\345\260\261\347\273\252", nullptr));
        menu_file->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
