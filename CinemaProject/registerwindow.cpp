#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "users.h"
#include <QString>


#include <QDate>

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->label_usernamecheck->setVisible(false);
    ui->label_agecheck->setVisible(false);
    ui->label_matchingpasscheck->setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_RegisterButton_clicked()
{
    QString Username =  ui->UserLineEdit->text();
    QString Password = ui->PassLineEdit->text();
    QString ReTypedPassword =  ui->RetypeLineEdit->text();
    QString Month = ui->MonthComboBox->currentText();
    QString Day = ui->DayComboBox->currentText();
    QString year = ui->YearComboBox->currentText();
    if(ui->MaleRadioButton->isChecked()){
        QString Male = "Male";
    }
    if(ui->FemaleRadioButton->isChecked()){
        QString Female = "Female";
    }

    if(ui->UserRadioButton->isChecked()){
        QString User = "User";
    }
    if(ui->AdminRadioButton->isChecked()){
        QString Admin = "Admin";
    }
    if(ui->ActionCheckBox->isChecked()){
        QString ActionGenre = "Action";
    }
    if(ui->RomanceCheckBox->isChecked()){
        QString RomanceGenre = "Romance";
    }
    if(ui->ComedyCheckBox->isChecked()){
        QString ComedyGenre = "Comedy";
    }
    if(ui->DramaCheckBox->isChecked()){
        QString DramaGenre = "Drama";
    }
    if(ui->HorroCheckBox->isChecked()){
        QString HorrorGenre = "Horrot";
    }
    if(ui->OtherCheckBox->isChecked()){
        QString Other = "Other";
    }
    int Year = year.toInt();

}

