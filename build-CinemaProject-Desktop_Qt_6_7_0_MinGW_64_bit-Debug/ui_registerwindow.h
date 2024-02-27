/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *UserLabel;
    QLineEdit *UserLineEdit;
    QLabel *UsernameCheck;
    QLineEdit *PassLineEdit;
    QLabel *PassLabel;
    QLabel *RetypeLabel;
    QLineEdit *RetypeLineEdit;
    QLabel *CheckPassLabel;
    QGroupBox *BirthdayBox;
    QLabel *MonthLabel;
    QLabel *DayLabel;
    QLabel *YearLabel;
    QComboBox *MonthComboBox;
    QComboBox *DayComboBox;
    QComboBox *YearComboBox;
    QLabel *CheckAgedLabel;
    QGroupBox *GenderGroupBox;
    QRadioButton *FemaleRadioButton;
    QRadioButton *MaleRadioButton;
    QGroupBox *AccTypeGroupBox;
    QRadioButton *UserRadioButton;
    QRadioButton *AdminRadioButton;
    QGroupBox *FavGenreGroupBox;
    QCheckBox *ActionCheckBox;
    QCheckBox *DramaCheckBox;
    QCheckBox *ComedyCheckBox;
    QCheckBox *RomanceCheckBox;
    QCheckBox *HorroCheckBox;
    QCheckBox *OtherCheckBox;
    QPushButton *RegisterButton;
    QLabel *CheckRegisterFields;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(1213, 811);
        UserLabel = new QLabel(RegisterWindow);
        UserLabel->setObjectName("UserLabel");
        UserLabel->setGeometry(QRect(90, 50, 101, 20));
        UserLineEdit = new QLineEdit(RegisterWindow);
        UserLineEdit->setObjectName("UserLineEdit");
        UserLineEdit->setGeometry(QRect(180, 50, 221, 28));
        UsernameCheck = new QLabel(RegisterWindow);
        UsernameCheck->setObjectName("UsernameCheck");
        UsernameCheck->setGeometry(QRect(420, 60, 231, 20));
        PassLineEdit = new QLineEdit(RegisterWindow);
        PassLineEdit->setObjectName("PassLineEdit");
        PassLineEdit->setGeometry(QRect(180, 100, 221, 28));
        PassLabel = new QLabel(RegisterWindow);
        PassLabel->setObjectName("PassLabel");
        PassLabel->setGeometry(QRect(90, 100, 81, 20));
        RetypeLabel = new QLabel(RegisterWindow);
        RetypeLabel->setObjectName("RetypeLabel");
        RetypeLabel->setGeometry(QRect(90, 150, 141, 20));
        RetypeLineEdit = new QLineEdit(RegisterWindow);
        RetypeLineEdit->setObjectName("RetypeLineEdit");
        RetypeLineEdit->setGeometry(QRect(250, 150, 231, 28));
        CheckPassLabel = new QLabel(RegisterWindow);
        CheckPassLabel->setObjectName("CheckPassLabel");
        CheckPassLabel->setGeometry(QRect(510, 160, 231, 20));
        BirthdayBox = new QGroupBox(RegisterWindow);
        BirthdayBox->setObjectName("BirthdayBox");
        BirthdayBox->setGeometry(QRect(90, 210, 401, 131));
        MonthLabel = new QLabel(BirthdayBox);
        MonthLabel->setObjectName("MonthLabel");
        MonthLabel->setGeometry(QRect(30, 40, 63, 20));
        DayLabel = new QLabel(BirthdayBox);
        DayLabel->setObjectName("DayLabel");
        DayLabel->setGeometry(QRect(170, 40, 63, 20));
        YearLabel = new QLabel(BirthdayBox);
        YearLabel->setObjectName("YearLabel");
        YearLabel->setGeometry(QRect(310, 40, 63, 20));
        MonthComboBox = new QComboBox(BirthdayBox);
        MonthComboBox->setObjectName("MonthComboBox");
        MonthComboBox->setGeometry(QRect(30, 70, 82, 28));
        DayComboBox = new QComboBox(BirthdayBox);
        DayComboBox->setObjectName("DayComboBox");
        DayComboBox->setGeometry(QRect(160, 70, 82, 28));
        YearComboBox = new QComboBox(BirthdayBox);
        YearComboBox->setObjectName("YearComboBox");
        YearComboBox->setGeometry(QRect(310, 70, 82, 28));
        CheckAgedLabel = new QLabel(RegisterWindow);
        CheckAgedLabel->setObjectName("CheckAgedLabel");
        CheckAgedLabel->setGeometry(QRect(530, 310, 181, 20));
        GenderGroupBox = new QGroupBox(RegisterWindow);
        GenderGroupBox->setObjectName("GenderGroupBox");
        GenderGroupBox->setGeometry(QRect(90, 370, 191, 111));
        FemaleRadioButton = new QRadioButton(GenderGroupBox);
        FemaleRadioButton->setObjectName("FemaleRadioButton");
        FemaleRadioButton->setGeometry(QRect(20, 70, 112, 26));
        MaleRadioButton = new QRadioButton(GenderGroupBox);
        MaleRadioButton->setObjectName("MaleRadioButton");
        MaleRadioButton->setGeometry(QRect(20, 40, 112, 26));
        AccTypeGroupBox = new QGroupBox(RegisterWindow);
        AccTypeGroupBox->setObjectName("AccTypeGroupBox");
        AccTypeGroupBox->setGeometry(QRect(340, 369, 191, 111));
        UserRadioButton = new QRadioButton(AccTypeGroupBox);
        UserRadioButton->setObjectName("UserRadioButton");
        UserRadioButton->setGeometry(QRect(20, 40, 112, 26));
        AdminRadioButton = new QRadioButton(AccTypeGroupBox);
        AdminRadioButton->setObjectName("AdminRadioButton");
        AdminRadioButton->setGeometry(QRect(20, 70, 112, 26));
        FavGenreGroupBox = new QGroupBox(RegisterWindow);
        FavGenreGroupBox->setObjectName("FavGenreGroupBox");
        FavGenreGroupBox->setGeometry(QRect(90, 489, 331, 161));
        ActionCheckBox = new QCheckBox(FavGenreGroupBox);
        ActionCheckBox->setObjectName("ActionCheckBox");
        ActionCheckBox->setGeometry(QRect(20, 40, 93, 26));
        DramaCheckBox = new QCheckBox(FavGenreGroupBox);
        DramaCheckBox->setObjectName("DramaCheckBox");
        DramaCheckBox->setGeometry(QRect(190, 40, 93, 26));
        ComedyCheckBox = new QCheckBox(FavGenreGroupBox);
        ComedyCheckBox->setObjectName("ComedyCheckBox");
        ComedyCheckBox->setGeometry(QRect(20, 80, 93, 26));
        RomanceCheckBox = new QCheckBox(FavGenreGroupBox);
        RomanceCheckBox->setObjectName("RomanceCheckBox");
        RomanceCheckBox->setGeometry(QRect(20, 120, 93, 26));
        HorroCheckBox = new QCheckBox(FavGenreGroupBox);
        HorroCheckBox->setObjectName("HorroCheckBox");
        HorroCheckBox->setGeometry(QRect(190, 80, 93, 26));
        OtherCheckBox = new QCheckBox(FavGenreGroupBox);
        OtherCheckBox->setObjectName("OtherCheckBox");
        OtherCheckBox->setGeometry(QRect(190, 120, 93, 26));
        RegisterButton = new QPushButton(RegisterWindow);
        RegisterButton->setObjectName("RegisterButton");
        RegisterButton->setGeometry(QRect(90, 670, 111, 41));
        CheckRegisterFields = new QLabel(RegisterWindow);
        CheckRegisterFields->setObjectName("CheckRegisterFields");
        CheckRegisterFields->setGeometry(QRect(240, 680, 221, 20));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        UserLabel->setText(QCoreApplication::translate("RegisterWindow", "Username: ", nullptr));
        UsernameCheck->setText(QCoreApplication::translate("RegisterWindow", "Check if username exits (redfont)", nullptr));
        PassLabel->setText(QCoreApplication::translate("RegisterWindow", "Password:", nullptr));
        RetypeLabel->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password:", nullptr));
        CheckPassLabel->setText(QCoreApplication::translate("RegisterWindow", "Check if Password match (redfont)", nullptr));
        BirthdayBox->setTitle(QCoreApplication::translate("RegisterWindow", "Date of Birth: ", nullptr));
        MonthLabel->setText(QCoreApplication::translate("RegisterWindow", "Month:", nullptr));
        DayLabel->setText(QCoreApplication::translate("RegisterWindow", "Day:", nullptr));
        YearLabel->setText(QCoreApplication::translate("RegisterWindow", "Year:", nullptr));
        CheckAgedLabel->setText(QCoreApplication::translate("RegisterWindow", "Check age (redfont)", nullptr));
        GenderGroupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Gender:", nullptr));
        FemaleRadioButton->setText(QCoreApplication::translate("RegisterWindow", "RadioButton", nullptr));
        MaleRadioButton->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        AccTypeGroupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type:", nullptr));
        UserRadioButton->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        AdminRadioButton->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        FavGenreGroupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Favorite Genre(s)", nullptr));
        ActionCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        DramaCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        ComedyCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        RomanceCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        HorroCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        OtherCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        RegisterButton->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        CheckRegisterFields->setText(QCoreApplication::translate("RegisterWindow", "Check if all fields are full", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
