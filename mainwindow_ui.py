# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'mainwindow.ui'
##
## Created by: Qt User Interface Compiler version 6.8.1
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QAction, QBrush, QColor, QConicalGradient,
    QCursor, QFont, QFontDatabase, QGradient,
    QIcon, QImage, QKeySequence, QLinearGradient,
    QPainter, QPalette, QPixmap, QRadialGradient,
    QTransform)
from PySide6.QtWidgets import (QApplication, QFormLayout, QFrame, QGroupBox,
    QHBoxLayout, QHeaderView, QLabel, QLineEdit,
    QMainWindow, QMenu, QMenuBar, QPushButton,
    QRadioButton, QSizePolicy, QSpacerItem, QSpinBox,
    QSplitter, QStatusBar, QTableView, QVBoxLayout,
    QWidget)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(900, 650)
        self.action_exit = QAction(MainWindow)
        self.action_exit.setObjectName(u"action_exit")
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.verticalLayout = QVBoxLayout(self.centralwidget)
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.groupBox_connection = QGroupBox(self.centralwidget)
        self.groupBox_connection.setObjectName(u"groupBox_connection")
        self.horizontalLayout = QHBoxLayout(self.groupBox_connection)
        self.horizontalLayout.setObjectName(u"horizontalLayout")
        self.label_status = QLabel(self.groupBox_connection)
        self.label_status.setObjectName(u"label_status")

        self.horizontalLayout.addWidget(self.label_status)

        self.label_connection_status = QLabel(self.groupBox_connection)
        self.label_connection_status.setObjectName(u"label_connection_status")
        self.label_connection_status.setAlignment(Qt.AlignLeading|Qt.AlignLeft|Qt.AlignVCenter)

        self.horizontalLayout.addWidget(self.label_connection_status)

        self.horizontalSpacer = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout.addItem(self.horizontalSpacer)

        self.pushButton_connect = QPushButton(self.groupBox_connection)
        self.pushButton_connect.setObjectName(u"pushButton_connect")

        self.horizontalLayout.addWidget(self.pushButton_connect)

        self.pushButton_disconnect = QPushButton(self.groupBox_connection)
        self.pushButton_disconnect.setObjectName(u"pushButton_disconnect")

        self.horizontalLayout.addWidget(self.pushButton_disconnect)

        self.pushButton_initTable = QPushButton(self.groupBox_connection)
        self.pushButton_initTable.setObjectName(u"pushButton_initTable")

        self.horizontalLayout.addWidget(self.pushButton_initTable)


        self.verticalLayout.addWidget(self.groupBox_connection)

        self.splitter = QSplitter(self.centralwidget)
        self.splitter.setObjectName(u"splitter")
        self.splitter.setOrientation(Qt.Horizontal)
        self.groupBox_studentInfo = QGroupBox(self.splitter)
        self.groupBox_studentInfo.setObjectName(u"groupBox_studentInfo")
        self.verticalLayout_4 = QVBoxLayout(self.groupBox_studentInfo)
        self.verticalLayout_4.setObjectName(u"verticalLayout_4")
        self.formLayout = QFormLayout()
        self.formLayout.setObjectName(u"formLayout")
        self.label_id = QLabel(self.groupBox_studentInfo)
        self.label_id.setObjectName(u"label_id")

        self.formLayout.setWidget(0, QFormLayout.LabelRole, self.label_id)

        self.lineEdit_id = QLineEdit(self.groupBox_studentInfo)
        self.lineEdit_id.setObjectName(u"lineEdit_id")

        self.formLayout.setWidget(0, QFormLayout.FieldRole, self.lineEdit_id)

        self.label_name = QLabel(self.groupBox_studentInfo)
        self.label_name.setObjectName(u"label_name")

        self.formLayout.setWidget(1, QFormLayout.LabelRole, self.label_name)

        self.lineEdit_name = QLineEdit(self.groupBox_studentInfo)
        self.lineEdit_name.setObjectName(u"lineEdit_name")

        self.formLayout.setWidget(1, QFormLayout.FieldRole, self.lineEdit_name)

        self.label_age = QLabel(self.groupBox_studentInfo)
        self.label_age.setObjectName(u"label_age")

        self.formLayout.setWidget(2, QFormLayout.LabelRole, self.label_age)

        self.spinBox_age = QSpinBox(self.groupBox_studentInfo)
        self.spinBox_age.setObjectName(u"spinBox_age")
        self.spinBox_age.setMinimum(15)
        self.spinBox_age.setMaximum(50)
        self.spinBox_age.setValue(18)

        self.formLayout.setWidget(2, QFormLayout.FieldRole, self.spinBox_age)

        self.label_gender = QLabel(self.groupBox_studentInfo)
        self.label_gender.setObjectName(u"label_gender")

        self.formLayout.setWidget(3, QFormLayout.LabelRole, self.label_gender)

        self.horizontalLayout_3 = QHBoxLayout()
        self.horizontalLayout_3.setObjectName(u"horizontalLayout_3")
        self.radioButton_male = QRadioButton(self.groupBox_studentInfo)
        self.radioButton_male.setObjectName(u"radioButton_male")
        self.radioButton_male.setChecked(True)

        self.horizontalLayout_3.addWidget(self.radioButton_male)

        self.radioButton_female = QRadioButton(self.groupBox_studentInfo)
        self.radioButton_female.setObjectName(u"radioButton_female")

        self.horizontalLayout_3.addWidget(self.radioButton_female)


        self.formLayout.setLayout(3, QFormLayout.FieldRole, self.horizontalLayout_3)

        self.label_class = QLabel(self.groupBox_studentInfo)
        self.label_class.setObjectName(u"label_class")

        self.formLayout.setWidget(4, QFormLayout.LabelRole, self.label_class)

        self.lineEdit_class = QLineEdit(self.groupBox_studentInfo)
        self.lineEdit_class.setObjectName(u"lineEdit_class")

        self.formLayout.setWidget(4, QFormLayout.FieldRole, self.lineEdit_class)

        self.label_photo = QLabel(self.groupBox_studentInfo)
        self.label_photo.setObjectName(u"label_photo")

        self.formLayout.setWidget(5, QFormLayout.LabelRole, self.label_photo)

        self.horizontalLayout_4 = QHBoxLayout()
        self.horizontalLayout_4.setObjectName(u"horizontalLayout_4")
        self.label_photoPreview = QLabel(self.groupBox_studentInfo)
        self.label_photoPreview.setObjectName(u"label_photoPreview")
        self.label_photoPreview.setMinimumSize(QSize(120, 160))
        self.label_photoPreview.setFrameShape(QFrame.Box)
        self.label_photoPreview.setAlignment(Qt.AlignCenter)

        self.horizontalLayout_4.addWidget(self.label_photoPreview)

        self.pushButton_selectPhoto = QPushButton(self.groupBox_studentInfo)
        self.pushButton_selectPhoto.setObjectName(u"pushButton_selectPhoto")

        self.horizontalLayout_4.addWidget(self.pushButton_selectPhoto)


        self.formLayout.setLayout(5, QFormLayout.FieldRole, self.horizontalLayout_4)


        self.verticalLayout_4.addLayout(self.formLayout)

        self.horizontalLayout_5 = QHBoxLayout()
        self.horizontalLayout_5.setObjectName(u"horizontalLayout_5")
        self.horizontalSpacer_3 = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_5.addItem(self.horizontalSpacer_3)

        self.pushButton_save = QPushButton(self.groupBox_studentInfo)
        self.pushButton_save.setObjectName(u"pushButton_save")

        self.horizontalLayout_5.addWidget(self.pushButton_save)

        self.pushButton_clear = QPushButton(self.groupBox_studentInfo)
        self.pushButton_clear.setObjectName(u"pushButton_clear")

        self.horizontalLayout_5.addWidget(self.pushButton_clear)


        self.verticalLayout_4.addLayout(self.horizontalLayout_5)

        self.verticalSpacer = QSpacerItem(20, 40, QSizePolicy.Policy.Minimum, QSizePolicy.Policy.Expanding)

        self.verticalLayout_4.addItem(self.verticalSpacer)

        self.splitter.addWidget(self.groupBox_studentInfo)
        self.groupBox_results = QGroupBox(self.splitter)
        self.groupBox_results.setObjectName(u"groupBox_results")
        self.verticalLayout_3 = QVBoxLayout(self.groupBox_results)
        self.verticalLayout_3.setObjectName(u"verticalLayout_3")
        self.horizontalLayout_6 = QHBoxLayout()
        self.horizontalLayout_6.setObjectName(u"horizontalLayout_6")
        self.label_search = QLabel(self.groupBox_results)
        self.label_search.setObjectName(u"label_search")

        self.horizontalLayout_6.addWidget(self.label_search)

        self.lineEdit_search = QLineEdit(self.groupBox_results)
        self.lineEdit_search.setObjectName(u"lineEdit_search")

        self.horizontalLayout_6.addWidget(self.lineEdit_search)

        self.pushButton_search = QPushButton(self.groupBox_results)
        self.pushButton_search.setObjectName(u"pushButton_search")

        self.horizontalLayout_6.addWidget(self.pushButton_search)

        self.pushButton_showAll = QPushButton(self.groupBox_results)
        self.pushButton_showAll.setObjectName(u"pushButton_showAll")

        self.horizontalLayout_6.addWidget(self.pushButton_showAll)


        self.verticalLayout_3.addLayout(self.horizontalLayout_6)

        self.tableView_results = QTableView(self.groupBox_results)
        self.tableView_results.setObjectName(u"tableView_results")

        self.verticalLayout_3.addWidget(self.tableView_results)

        self.horizontalLayout_7 = QHBoxLayout()
        self.horizontalLayout_7.setObjectName(u"horizontalLayout_7")
        self.pushButton_loadPhoto = QPushButton(self.groupBox_results)
        self.pushButton_loadPhoto.setObjectName(u"pushButton_loadPhoto")

        self.horizontalLayout_7.addWidget(self.pushButton_loadPhoto)

        self.horizontalSpacer_4 = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_7.addItem(self.horizontalSpacer_4)

        self.pushButton_delete = QPushButton(self.groupBox_results)
        self.pushButton_delete.setObjectName(u"pushButton_delete")

        self.horizontalLayout_7.addWidget(self.pushButton_delete)


        self.verticalLayout_3.addLayout(self.horizontalLayout_7)

        self.splitter.addWidget(self.groupBox_results)

        self.verticalLayout.addWidget(self.splitter)

        self.label_status_message = QLabel(self.centralwidget)
        self.label_status_message.setObjectName(u"label_status_message")

        self.verticalLayout.addWidget(self.label_status_message)

        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(MainWindow)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 900, 21))
        self.menu_file = QMenu(self.menubar)
        self.menu_file.setObjectName(u"menu_file")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QStatusBar(MainWindow)
        self.statusbar.setObjectName(u"statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.menubar.addAction(self.menu_file.menuAction())
        self.menu_file.addAction(self.action_exit)

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"\u5b66\u751f\u4fe1\u606f\u7ba1\u7406\u7cfb\u7edf", None))
        self.action_exit.setText(QCoreApplication.translate("MainWindow", u"\u9000\u51fa", None))
        self.groupBox_connection.setTitle(QCoreApplication.translate("MainWindow", u"\u6570\u636e\u5e93\u8fde\u63a5", None))
        self.label_status.setText(QCoreApplication.translate("MainWindow", u"\u8fde\u63a5\u72b6\u6001\uff1a", None))
        self.label_connection_status.setText(QCoreApplication.translate("MainWindow", u"\u672a\u8fde\u63a5", None))
        self.pushButton_connect.setText(QCoreApplication.translate("MainWindow", u"\u8fde\u63a5\u6570\u636e\u5e93", None))
        self.pushButton_disconnect.setText(QCoreApplication.translate("MainWindow", u"\u65ad\u5f00\u8fde\u63a5", None))
        self.pushButton_initTable.setText(QCoreApplication.translate("MainWindow", u"\u521d\u59cb\u5316\u8868", None))
        self.groupBox_studentInfo.setTitle(QCoreApplication.translate("MainWindow", u"\u5b66\u751f\u4fe1\u606f\u5f55\u5165", None))
        self.label_id.setText(QCoreApplication.translate("MainWindow", u"\u5b66\u53f7\uff1a", None))
        self.label_name.setText(QCoreApplication.translate("MainWindow", u"\u59d3\u540d\uff1a", None))
        self.label_age.setText(QCoreApplication.translate("MainWindow", u"\u5e74\u9f84\uff1a", None))
        self.label_gender.setText(QCoreApplication.translate("MainWindow", u"\u6027\u522b\uff1a", None))
        self.radioButton_male.setText(QCoreApplication.translate("MainWindow", u"\u7537", None))
        self.radioButton_female.setText(QCoreApplication.translate("MainWindow", u"\u5973", None))
        self.label_class.setText(QCoreApplication.translate("MainWindow", u"\u73ed\u7ea7\uff1a", None))
        self.label_photo.setText(QCoreApplication.translate("MainWindow", u"\u7167\u7247\uff1a", None))
        self.label_photoPreview.setText(QCoreApplication.translate("MainWindow", u"\u7167\u7247\u9884\u89c8", None))
        self.pushButton_selectPhoto.setText(QCoreApplication.translate("MainWindow", u"\u9009\u62e9\u7167\u7247", None))
        self.pushButton_save.setText(QCoreApplication.translate("MainWindow", u"\u4fdd\u5b58", None))
        self.pushButton_clear.setText(QCoreApplication.translate("MainWindow", u"\u6e05\u7a7a", None))
        self.groupBox_results.setTitle(QCoreApplication.translate("MainWindow", u"\u5b66\u751f\u5217\u8868", None))
        self.label_search.setText(QCoreApplication.translate("MainWindow", u"\u641c\u7d22\uff1a", None))
        self.pushButton_search.setText(QCoreApplication.translate("MainWindow", u"\u641c\u7d22", None))
        self.pushButton_showAll.setText(QCoreApplication.translate("MainWindow", u"\u663e\u793a\u5168\u90e8", None))
        self.pushButton_loadPhoto.setText(QCoreApplication.translate("MainWindow", u"\u67e5\u770b\u7167\u7247", None))
        self.pushButton_delete.setText(QCoreApplication.translate("MainWindow", u"\u5220\u9664", None))
        self.label_status_message.setText(QCoreApplication.translate("MainWindow", u"\u5c31\u7eea", None))
        self.menu_file.setTitle(QCoreApplication.translate("MainWindow", u"\u6587\u4ef6", None))
    # retranslateUi

