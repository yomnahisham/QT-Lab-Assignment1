/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *PicLabel;
    QPushButton *LogOutButton;
    QLabel *Welcmsg;
    QLabel *WelcLabel;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(796, 620);
        PicLabel = new QLabel(WelcomeWindow);
        PicLabel->setObjectName("PicLabel");
        PicLabel->setGeometry(QRect(90, 130, 601, 281));
        LogOutButton = new QPushButton(WelcomeWindow);
        LogOutButton->setObjectName("LogOutButton");
        LogOutButton->setGeometry(QRect(90, 470, 101, 41));
        Welcmsg = new QLabel(WelcomeWindow);
        Welcmsg->setObjectName("Welcmsg");
        Welcmsg->setGeometry(QRect(90, 70, 131, 16));
        WelcLabel = new QLabel(WelcomeWindow);
        WelcLabel->setObjectName("WelcLabel");
        WelcLabel->setGeometry(QRect(280, 210, 111, 51));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        PicLabel->setText(QString());
        LogOutButton->setText(QCoreApplication::translate("WelcomeWindow", "Log Out", nullptr));
        Welcmsg->setText(QCoreApplication::translate("WelcomeWindow", "Hello admin ", nullptr));
        WelcLabel->setText(QCoreApplication::translate("WelcomeWindow", "Welcome!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
