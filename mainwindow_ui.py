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
from PySide6.QtWidgets import (QApplication, QGroupBox, QHBoxLayout, QHeaderView,
    QLabel, QMainWindow, QMenu, QMenuBar,
    QPlainTextEdit, QPushButton, QSizePolicy, QSpacerItem,
    QStatusBar, QTableView, QVBoxLayout, QWidget)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(800, 600)
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


        self.verticalLayout.addWidget(self.groupBox_connection)

        self.groupBox_query = QGroupBox(self.centralwidget)
        self.groupBox_query.setObjectName(u"groupBox_query")
        self.verticalLayout_2 = QVBoxLayout(self.groupBox_query)
        self.verticalLayout_2.setObjectName(u"verticalLayout_2")
        self.plainTextEdit_query = QPlainTextEdit(self.groupBox_query)
        self.plainTextEdit_query.setObjectName(u"plainTextEdit_query")

        self.verticalLayout_2.addWidget(self.plainTextEdit_query)

        self.horizontalLayout_2 = QHBoxLayout()
        self.horizontalLayout_2.setObjectName(u"horizontalLayout_2")
        self.horizontalSpacer_2 = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_2.addItem(self.horizontalSpacer_2)

        self.pushButton_executeQuery = QPushButton(self.groupBox_query)
        self.pushButton_executeQuery.setObjectName(u"pushButton_executeQuery")

        self.horizontalLayout_2.addWidget(self.pushButton_executeQuery)

        self.pushButton_clearQuery = QPushButton(self.groupBox_query)
        self.pushButton_clearQuery.setObjectName(u"pushButton_clearQuery")

        self.horizontalLayout_2.addWidget(self.pushButton_clearQuery)


        self.verticalLayout_2.addLayout(self.horizontalLayout_2)


        self.verticalLayout.addWidget(self.groupBox_query)

        self.groupBox_results = QGroupBox(self.centralwidget)
        self.groupBox_results.setObjectName(u"groupBox_results")
        self.verticalLayout_3 = QVBoxLayout(self.groupBox_results)
        self.verticalLayout_3.setObjectName(u"verticalLayout_3")
        self.tableView_results = QTableView(self.groupBox_results)
        self.tableView_results.setObjectName(u"tableView_results")

        self.verticalLayout_3.addWidget(self.tableView_results)


        self.verticalLayout.addWidget(self.groupBox_results)

        self.label_status_message = QLabel(self.centralwidget)
        self.label_status_message.setObjectName(u"label_status_message")

        self.verticalLayout.addWidget(self.label_status_message)

        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(MainWindow)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 800, 21))
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
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"MySQL\u6570\u636e\u5e93\u7ba1\u7406", None))
        self.action_exit.setText(QCoreApplication.translate("MainWindow", u"\u9000\u51fa", None))
        self.groupBox_connection.setTitle(QCoreApplication.translate("MainWindow", u"\u6570\u636e\u5e93\u8fde\u63a5", None))
        self.label_status.setText(QCoreApplication.translate("MainWindow", u"\u8fde\u63a5\u72b6\u6001\uff1a", None))
        self.label_connection_status.setText(QCoreApplication.translate("MainWindow", u"\u672a\u8fde\u63a5", None))
        self.pushButton_connect.setText(QCoreApplication.translate("MainWindow", u"\u8fde\u63a5\u6570\u636e\u5e93", None))
        self.pushButton_disconnect.setText(QCoreApplication.translate("MainWindow", u"\u65ad\u5f00\u8fde\u63a5", None))
        self.groupBox_query.setTitle(QCoreApplication.translate("MainWindow", u"SQL\u67e5\u8be2", None))
        self.plainTextEdit_query.setPlaceholderText(QCoreApplication.translate("MainWindow", u"\u5728\u6b64\u8f93\u5165SQL\u67e5\u8be2\u8bed\u53e5...", None))
        self.pushButton_executeQuery.setText(QCoreApplication.translate("MainWindow", u"\u6267\u884c\u67e5\u8be2", None))
        self.pushButton_clearQuery.setText(QCoreApplication.translate("MainWindow", u"\u6e05\u7a7a", None))
        self.groupBox_results.setTitle(QCoreApplication.translate("MainWindow", u"\u67e5\u8be2\u7ed3\u679c", None))
        self.label_status_message.setText(QCoreApplication.translate("MainWindow", u"\u5c31\u7eea", None))
        self.menu_file.setTitle(QCoreApplication.translate("MainWindow", u"\u6587\u4ef6", None))
    # retranslateUi

