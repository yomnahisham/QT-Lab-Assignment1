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
    QLineEdit *PassLineEdit;
    QLabel *PassLabel;
    QLabel *RetypeLabel;
    QLineEdit *RetypeLineEdit;
    QGroupBox *BirthdayBox;
    QLabel *MonthLabel;
    QLabel *DayLabel;
    QLabel *YearLabel;
    QComboBox *MonthComboBox;
    QComboBox *DayComboBox;
    QComboBox *YearComboBox;
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
    QCheckBox *HorrorCheckBox;
    QCheckBox *OtherCheckBox;
    QPushButton *RegisterButton;
    QLabel *label_usernamecheck;
    QLabel *label_matchingpasscheck;
    QLabel *label_agecheck;
    QLabel *CheckInputs;

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
        PassLineEdit = new QLineEdit(RegisterWindow);
        PassLineEdit->setObjectName("PassLineEdit");
        PassLineEdit->setGeometry(QRect(180, 100, 221, 28));
        PassLineEdit->setEchoMode(QLineEdit::Password);
        PassLabel = new QLabel(RegisterWindow);
        PassLabel->setObjectName("PassLabel");
        PassLabel->setGeometry(QRect(90, 100, 81, 20));
        RetypeLabel = new QLabel(RegisterWindow);
        RetypeLabel->setObjectName("RetypeLabel");
        RetypeLabel->setGeometry(QRect(90, 150, 141, 20));
        RetypeLineEdit = new QLineEdit(RegisterWindow);
        RetypeLineEdit->setObjectName("RetypeLineEdit");
        RetypeLineEdit->setGeometry(QRect(250, 150, 231, 28));
        RetypeLineEdit->setEchoMode(QLineEdit::Password);
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
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->addItem(QString());
        MonthComboBox->setObjectName("MonthComboBox");
        MonthComboBox->setGeometry(QRect(30, 70, 82, 28));
        DayComboBox = new QComboBox(BirthdayBox);
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->addItem(QString());
        DayComboBox->setObjectName("DayComboBox");
        DayComboBox->setGeometry(QRect(160, 70, 82, 28));
        YearComboBox = new QComboBox(BirthdayBox);
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->addItem(QString());
        YearComboBox->setObjectName("YearComboBox");
        YearComboBox->setGeometry(QRect(310, 70, 82, 28));
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
        HorrorCheckBox = new QCheckBox(FavGenreGroupBox);
        HorrorCheckBox->setObjectName("HorrorCheckBox");
        HorrorCheckBox->setGeometry(QRect(190, 80, 93, 26));
        OtherCheckBox = new QCheckBox(FavGenreGroupBox);
        OtherCheckBox->setObjectName("OtherCheckBox");
        OtherCheckBox->setGeometry(QRect(190, 120, 93, 26));
        RegisterButton = new QPushButton(RegisterWindow);
        RegisterButton->setObjectName("RegisterButton");
        RegisterButton->setGeometry(QRect(90, 670, 111, 41));
        label_usernamecheck = new QLabel(RegisterWindow);
        label_usernamecheck->setObjectName("label_usernamecheck");
        label_usernamecheck->setGeometry(QRect(440, 60, 311, 16));
        label_matchingpasscheck = new QLabel(RegisterWindow);
        label_matchingpasscheck->setObjectName("label_matchingpasscheck");
        label_matchingpasscheck->setGeometry(QRect(510, 160, 371, 16));
        label_agecheck = new QLabel(RegisterWindow);
        label_agecheck->setObjectName("label_agecheck");
        label_agecheck->setGeometry(QRect(530, 320, 431, 16));
        CheckInputs = new QLabel(RegisterWindow);
        CheckInputs->setObjectName("CheckInputs");
        CheckInputs->setGeometry(QRect(280, 680, 441, 20));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        UserLabel->setText(QCoreApplication::translate("RegisterWindow", "Username: ", nullptr));
        PassLabel->setText(QCoreApplication::translate("RegisterWindow", "Password:", nullptr));
        RetypeLabel->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password:", nullptr));
        BirthdayBox->setTitle(QCoreApplication::translate("RegisterWindow", "Date of Birth: ", nullptr));
        MonthLabel->setText(QCoreApplication::translate("RegisterWindow", "Month:", nullptr));
        DayLabel->setText(QCoreApplication::translate("RegisterWindow", "Day:", nullptr));
        YearLabel->setText(QCoreApplication::translate("RegisterWindow", "Year:", nullptr));
        MonthComboBox->setItemText(0, QString());
        MonthComboBox->setItemText(1, QCoreApplication::translate("RegisterWindow", "January", nullptr));
        MonthComboBox->setItemText(2, QCoreApplication::translate("RegisterWindow", "February", nullptr));
        MonthComboBox->setItemText(3, QCoreApplication::translate("RegisterWindow", "March", nullptr));
        MonthComboBox->setItemText(4, QCoreApplication::translate("RegisterWindow", "April", nullptr));
        MonthComboBox->setItemText(5, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        MonthComboBox->setItemText(6, QCoreApplication::translate("RegisterWindow", "June", nullptr));
        MonthComboBox->setItemText(7, QCoreApplication::translate("RegisterWindow", "July", nullptr));
        MonthComboBox->setItemText(8, QCoreApplication::translate("RegisterWindow", "August", nullptr));
        MonthComboBox->setItemText(9, QCoreApplication::translate("RegisterWindow", "September", nullptr));
        MonthComboBox->setItemText(10, QCoreApplication::translate("RegisterWindow", "October", nullptr));
        MonthComboBox->setItemText(11, QCoreApplication::translate("RegisterWindow", "November", nullptr));
        MonthComboBox->setItemText(12, QCoreApplication::translate("RegisterWindow", "December", nullptr));

        DayComboBox->setItemText(0, QString());
        DayComboBox->setItemText(1, QCoreApplication::translate("RegisterWindow", "1", nullptr));
        DayComboBox->setItemText(2, QCoreApplication::translate("RegisterWindow", "2", nullptr));
        DayComboBox->setItemText(3, QCoreApplication::translate("RegisterWindow", "3", nullptr));
        DayComboBox->setItemText(4, QCoreApplication::translate("RegisterWindow", "4", nullptr));
        DayComboBox->setItemText(5, QCoreApplication::translate("RegisterWindow", "5", nullptr));
        DayComboBox->setItemText(6, QCoreApplication::translate("RegisterWindow", "6", nullptr));
        DayComboBox->setItemText(7, QCoreApplication::translate("RegisterWindow", "7", nullptr));
        DayComboBox->setItemText(8, QCoreApplication::translate("RegisterWindow", "8", nullptr));
        DayComboBox->setItemText(9, QCoreApplication::translate("RegisterWindow", "9", nullptr));
        DayComboBox->setItemText(10, QCoreApplication::translate("RegisterWindow", "10", nullptr));
        DayComboBox->setItemText(11, QCoreApplication::translate("RegisterWindow", "11", nullptr));
        DayComboBox->setItemText(12, QCoreApplication::translate("RegisterWindow", "12", nullptr));
        DayComboBox->setItemText(13, QCoreApplication::translate("RegisterWindow", "13", nullptr));
        DayComboBox->setItemText(14, QCoreApplication::translate("RegisterWindow", "14", nullptr));
        DayComboBox->setItemText(15, QCoreApplication::translate("RegisterWindow", "15", nullptr));
        DayComboBox->setItemText(16, QCoreApplication::translate("RegisterWindow", "16", nullptr));
        DayComboBox->setItemText(17, QCoreApplication::translate("RegisterWindow", "17", nullptr));
        DayComboBox->setItemText(18, QCoreApplication::translate("RegisterWindow", "18", nullptr));
        DayComboBox->setItemText(19, QCoreApplication::translate("RegisterWindow", "19", nullptr));
        DayComboBox->setItemText(20, QCoreApplication::translate("RegisterWindow", "20", nullptr));
        DayComboBox->setItemText(21, QCoreApplication::translate("RegisterWindow", "21", nullptr));
        DayComboBox->setItemText(22, QCoreApplication::translate("RegisterWindow", "22", nullptr));
        DayComboBox->setItemText(23, QCoreApplication::translate("RegisterWindow", "23", nullptr));
        DayComboBox->setItemText(24, QCoreApplication::translate("RegisterWindow", "24", nullptr));
        DayComboBox->setItemText(25, QCoreApplication::translate("RegisterWindow", "25", nullptr));
        DayComboBox->setItemText(26, QCoreApplication::translate("RegisterWindow", "26", nullptr));
        DayComboBox->setItemText(27, QCoreApplication::translate("RegisterWindow", "27", nullptr));
        DayComboBox->setItemText(28, QCoreApplication::translate("RegisterWindow", "28", nullptr));
        DayComboBox->setItemText(29, QCoreApplication::translate("RegisterWindow", "29", nullptr));
        DayComboBox->setItemText(30, QCoreApplication::translate("RegisterWindow", "30", nullptr));
        DayComboBox->setItemText(31, QCoreApplication::translate("RegisterWindow", "31", nullptr));

        YearComboBox->setItemText(0, QString());
        YearComboBox->setItemText(1, QCoreApplication::translate("RegisterWindow", "2024", nullptr));
        YearComboBox->setItemText(2, QCoreApplication::translate("RegisterWindow", "2023", nullptr));
        YearComboBox->setItemText(3, QCoreApplication::translate("RegisterWindow", "2022", nullptr));
        YearComboBox->setItemText(4, QCoreApplication::translate("RegisterWindow", "2021", nullptr));
        YearComboBox->setItemText(5, QCoreApplication::translate("RegisterWindow", "2020", nullptr));
        YearComboBox->setItemText(6, QCoreApplication::translate("RegisterWindow", "2019", nullptr));
        YearComboBox->setItemText(7, QCoreApplication::translate("RegisterWindow", "2018", nullptr));
        YearComboBox->setItemText(8, QCoreApplication::translate("RegisterWindow", "2017", nullptr));
        YearComboBox->setItemText(9, QCoreApplication::translate("RegisterWindow", "2016", nullptr));
        YearComboBox->setItemText(10, QCoreApplication::translate("RegisterWindow", "2015", nullptr));
        YearComboBox->setItemText(11, QCoreApplication::translate("RegisterWindow", "2014", nullptr));
        YearComboBox->setItemText(12, QCoreApplication::translate("RegisterWindow", "2013", nullptr));
        YearComboBox->setItemText(13, QCoreApplication::translate("RegisterWindow", "2012", nullptr));
        YearComboBox->setItemText(14, QCoreApplication::translate("RegisterWindow", "2011", nullptr));
        YearComboBox->setItemText(15, QCoreApplication::translate("RegisterWindow", "2010", nullptr));
        YearComboBox->setItemText(16, QCoreApplication::translate("RegisterWindow", "2009", nullptr));
        YearComboBox->setItemText(17, QCoreApplication::translate("RegisterWindow", "2008", nullptr));
        YearComboBox->setItemText(18, QCoreApplication::translate("RegisterWindow", "2007", nullptr));
        YearComboBox->setItemText(19, QCoreApplication::translate("RegisterWindow", "2006", nullptr));
        YearComboBox->setItemText(20, QCoreApplication::translate("RegisterWindow", "2005", nullptr));
        YearComboBox->setItemText(21, QCoreApplication::translate("RegisterWindow", "2004", nullptr));
        YearComboBox->setItemText(22, QCoreApplication::translate("RegisterWindow", "2003", nullptr));
        YearComboBox->setItemText(23, QCoreApplication::translate("RegisterWindow", "2002", nullptr));
        YearComboBox->setItemText(24, QCoreApplication::translate("RegisterWindow", "2001", nullptr));
        YearComboBox->setItemText(25, QCoreApplication::translate("RegisterWindow", "2000", nullptr));
        YearComboBox->setItemText(26, QCoreApplication::translate("RegisterWindow", "1999", nullptr));
        YearComboBox->setItemText(27, QCoreApplication::translate("RegisterWindow", "1998", nullptr));
        YearComboBox->setItemText(28, QCoreApplication::translate("RegisterWindow", "1997", nullptr));

        GenderGroupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Gender:", nullptr));
        FemaleRadioButton->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        MaleRadioButton->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        AccTypeGroupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type:", nullptr));
        UserRadioButton->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        AdminRadioButton->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        FavGenreGroupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Favorite Genre(s)", nullptr));
        ActionCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        DramaCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        ComedyCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        RomanceCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        HorrorCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        OtherCheckBox->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        RegisterButton->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        label_usernamecheck->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">TextLabel</span></p></body></html>", nullptr));
        label_matchingpasscheck->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">TextLabel</span></p></body></html>", nullptr));
        label_agecheck->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">TextLabel</span></p></body></html>", nullptr));
        CheckInputs->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">Check Input Fields</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
