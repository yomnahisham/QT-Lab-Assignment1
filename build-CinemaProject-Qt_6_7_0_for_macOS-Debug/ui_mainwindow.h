/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_username;
    QLabel *label_password;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QPushButton *pushButton_register;
    QLabel *label_error;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_username = new QLabel(centralwidget);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(100, 120, 131, 16));
        label_password = new QLabel(centralwidget);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(100, 150, 58, 16));
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(180, 120, 211, 21));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(180, 150, 211, 21));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(130, 220, 100, 32));
        pushButton_register = new QPushButton(centralwidget);
        pushButton_register->setObjectName("pushButton_register");
        pushButton_register->setGeometry(QRect(260, 220, 100, 32));
        label_error = new QLabel(centralwidget);
        label_error->setObjectName("label_error");
        label_error->setGeometry(QRect(100, 190, 291, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 36));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_username->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_password->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_register->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        label_error->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">TextLabel</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
