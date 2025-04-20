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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
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
    QPushButton *pushButton_initTable;
    QSplitter *splitter;
    QGroupBox *groupBox_studentInfo;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_id;
    QLineEdit *lineEdit_id;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QLabel *label_age;
    QSpinBox *spinBox_age;
    QLabel *label_gender;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QLabel *label_class;
    QLineEdit *lineEdit_class;
    QLabel *label_photo;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_photoPreview;
    QPushButton *pushButton_selectPhoto;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_save;
    QPushButton *pushButton_clear;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_results;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_search;
    QLineEdit *lineEdit_search;
    QPushButton *pushButton_search;
    QPushButton *pushButton_showAll;
    QTableView *tableView_results;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_loadPhoto;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_delete;
    QLabel *label_status_message;
    QMenuBar *menubar;
    QMenu *menu_file;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 650);
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

        pushButton_initTable = new QPushButton(groupBox_connection);
        pushButton_initTable->setObjectName(QString::fromUtf8("pushButton_initTable"));

        horizontalLayout->addWidget(pushButton_initTable);


        verticalLayout->addWidget(groupBox_connection);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox_studentInfo = new QGroupBox(splitter);
        groupBox_studentInfo->setObjectName(QString::fromUtf8("groupBox_studentInfo"));
        verticalLayout_4 = new QVBoxLayout(groupBox_studentInfo);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_id = new QLabel(groupBox_studentInfo);
        label_id->setObjectName(QString::fromUtf8("label_id"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_id);

        lineEdit_id = new QLineEdit(groupBox_studentInfo);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_id);

        label_name = new QLabel(groupBox_studentInfo);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        lineEdit_name = new QLineEdit(groupBox_studentInfo);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_name);

        label_age = new QLabel(groupBox_studentInfo);
        label_age->setObjectName(QString::fromUtf8("label_age"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_age);

        spinBox_age = new QSpinBox(groupBox_studentInfo);
        spinBox_age->setObjectName(QString::fromUtf8("spinBox_age"));
        spinBox_age->setMinimum(15);
        spinBox_age->setMaximum(50);
        spinBox_age->setValue(18);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox_age);

        label_gender = new QLabel(groupBox_studentInfo);
        label_gender->setObjectName(QString::fromUtf8("label_gender"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_gender);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton_male = new QRadioButton(groupBox_studentInfo);
        radioButton_male->setObjectName(QString::fromUtf8("radioButton_male"));
        radioButton_male->setChecked(true);

        horizontalLayout_3->addWidget(radioButton_male);

        radioButton_female = new QRadioButton(groupBox_studentInfo);
        radioButton_female->setObjectName(QString::fromUtf8("radioButton_female"));

        horizontalLayout_3->addWidget(radioButton_female);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        label_class = new QLabel(groupBox_studentInfo);
        label_class->setObjectName(QString::fromUtf8("label_class"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_class);

        lineEdit_class = new QLineEdit(groupBox_studentInfo);
        lineEdit_class->setObjectName(QString::fromUtf8("lineEdit_class"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_class);

        label_photo = new QLabel(groupBox_studentInfo);
        label_photo->setObjectName(QString::fromUtf8("label_photo"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_photo);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_photoPreview = new QLabel(groupBox_studentInfo);
        label_photoPreview->setObjectName(QString::fromUtf8("label_photoPreview"));
        label_photoPreview->setMinimumSize(QSize(120, 160));
        label_photoPreview->setFrameShape(QFrame::Box);
        label_photoPreview->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_photoPreview);

        pushButton_selectPhoto = new QPushButton(groupBox_studentInfo);
        pushButton_selectPhoto->setObjectName(QString::fromUtf8("pushButton_selectPhoto"));

        horizontalLayout_4->addWidget(pushButton_selectPhoto);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_4);


        verticalLayout_4->addLayout(formLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pushButton_save = new QPushButton(groupBox_studentInfo);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));

        horizontalLayout_5->addWidget(pushButton_save);

        pushButton_clear = new QPushButton(groupBox_studentInfo);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));

        horizontalLayout_5->addWidget(pushButton_clear);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        splitter->addWidget(groupBox_studentInfo);
        groupBox_results = new QGroupBox(splitter);
        groupBox_results->setObjectName(QString::fromUtf8("groupBox_results"));
        verticalLayout_3 = new QVBoxLayout(groupBox_results);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_search = new QLabel(groupBox_results);
        label_search->setObjectName(QString::fromUtf8("label_search"));

        horizontalLayout_6->addWidget(label_search);

        lineEdit_search = new QLineEdit(groupBox_results);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));

        horizontalLayout_6->addWidget(lineEdit_search);

        pushButton_search = new QPushButton(groupBox_results);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));

        horizontalLayout_6->addWidget(pushButton_search);

        pushButton_showAll = new QPushButton(groupBox_results);
        pushButton_showAll->setObjectName(QString::fromUtf8("pushButton_showAll"));

        horizontalLayout_6->addWidget(pushButton_showAll);


        verticalLayout_3->addLayout(horizontalLayout_6);

        tableView_results = new QTableView(groupBox_results);
        tableView_results->setObjectName(QString::fromUtf8("tableView_results"));

        verticalLayout_3->addWidget(tableView_results);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_loadPhoto = new QPushButton(groupBox_results);
        pushButton_loadPhoto->setObjectName(QString::fromUtf8("pushButton_loadPhoto"));

        horizontalLayout_7->addWidget(pushButton_loadPhoto);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        pushButton_delete = new QPushButton(groupBox_results);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));

        horizontalLayout_7->addWidget(pushButton_delete);


        verticalLayout_3->addLayout(horizontalLayout_7);

        splitter->addWidget(groupBox_results);

        verticalLayout->addWidget(splitter);

        label_status_message = new QLabel(centralwidget);
        label_status_message->setObjectName(QString::fromUtf8("label_status_message"));

        verticalLayout->addWidget(label_status_message);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        action_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        groupBox_connection->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\350\277\236\346\216\245", nullptr));
        label_status->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\347\212\266\346\200\201\357\274\232", nullptr));
        label_connection_status->setText(QCoreApplication::translate("MainWindow", "\346\234\252\350\277\236\346\216\245", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\346\225\260\346\215\256\345\272\223", nullptr));
        pushButton_disconnect->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        pushButton_initTable->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\350\241\250", nullptr));
        groupBox_studentInfo->setTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\345\275\225\345\205\245", nullptr));
        label_id->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_name->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_age->setText(QCoreApplication::translate("MainWindow", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_gender->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\232", nullptr));
        radioButton_male->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        radioButton_female->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        label_class->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_photo->setText(QCoreApplication::translate("MainWindow", "\347\205\247\347\211\207\357\274\232", nullptr));
        label_photoPreview->setText(QCoreApplication::translate("MainWindow", "\347\205\247\347\211\207\351\242\204\350\247\210", nullptr));
        pushButton_selectPhoto->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\347\205\247\347\211\207", nullptr));
        pushButton_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        groupBox_results->setTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\345\210\227\350\241\250", nullptr));
        label_search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242\357\274\232", nullptr));
        pushButton_search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        pushButton_showAll->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
        pushButton_loadPhoto->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\347\205\247\347\211\207", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        label_status_message->setText(QCoreApplication::translate("MainWindow", "\345\260\261\347\273\252", nullptr));
        menu_file->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
