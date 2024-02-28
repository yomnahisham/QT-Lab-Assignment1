/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

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

class Ui_LoginWindow
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

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(800, 600);
        centralwidget = new QWidget(LoginWindow);
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
        label_error->setStyleSheet(QString::fromUtf8("red"));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 36));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        label_username->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        label_password->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        pushButton_login->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        pushButton_register->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
        label_error->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">TextLabel</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
