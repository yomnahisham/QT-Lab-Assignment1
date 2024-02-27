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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *PicLabel;
    QLineEdit *WelcMsg;
    QPushButton *LogOutButton;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(796, 620);
        PicLabel = new QLabel(WelcomeWindow);
        PicLabel->setObjectName("PicLabel");
        PicLabel->setGeometry(QRect(190, 150, 361, 211));
        WelcMsg = new QLineEdit(WelcomeWindow);
        WelcMsg->setObjectName("WelcMsg");
        WelcMsg->setGeometry(QRect(190, 80, 113, 28));
        LogOutButton = new QPushButton(WelcomeWindow);
        LogOutButton->setObjectName("LogOutButton");
        LogOutButton->setGeometry(QRect(190, 450, 181, 71));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        PicLabel->setText(QString());
        WelcMsg->setText(QCoreApplication::translate("WelcomeWindow", "Hello admin 20,", nullptr));
        LogOutButton->setText(QCoreApplication::translate("WelcomeWindow", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
