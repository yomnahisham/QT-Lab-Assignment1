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
    ui->CheckRegisterFields->setStyleSheet("QLabel {color: red};");
    ui->CheckRegisterFields->setVisible(false);
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
    QString Gender;
    QString AccType;
    QString FavGenre;
    if(ui->MaleRadioButton->isChecked()){
        Gender = "Male";
    }else if(ui->FemaleRadioButton->isChecked()){
        Gender = "Female";
    }

    if(ui->UserRadioButton->isChecked()){
        AccType = "User";
    }else if(ui->AdminRadioButton->isChecked()){
        AccType = "Admin";
    }

    if(ui->ActionCheckBox->isChecked()){
        FavGenre = "Action";
    }else if(ui->RomanceCheckBox->isChecked()){
        FavGenre = "Romance";
    }else if(ui->ComedyCheckBox->isChecked()){
       FavGenre = "Comedy";
    }else if(ui->DramaCheckBox->isChecked()){
        FavGenre = "Drama";
    }else if(ui->HorroCheckBox->isChecked()){
        FavGenre = "Horrot";
    }else if(ui->OtherCheckBox->isChecked()){
       FavGenre = "Other";
    }

    int Year = year.toInt();
    int CurrentYear = 2024;
    int Age = CurrentYear - Year;
    if(Age < 12){
        ui->label_agecheck->setText("*Age is below 12");
        ui->label_agecheck->setVisible(true);
    }
    for(int i = 0; i < usersCount; i++){
        if(Username == usernames[i]){
            ui->label_usernamecheck->setText("*Username already exists");
            ui->label_usernamecheck->setVisible(true);
         }
        else{
            usernames[i] = Username;
            usersCount++;
        }
    }
    if(Password != ReTypedPassword){
        ui->label_matchingpasscheck->setVisible(true);
        ui->label_matchingpasscheck->setText("*Passwords dont match");

    }

    if(Username == " "){
        ui->CheckRegisterFields->setVisible(true);
        ui->CheckRegisterFields->setText("*All Fields must be filled");
    }
    if(Password == " "){
        ui->CheckRegisterFields->setVisible(true);
        ui->CheckRegisterFields->setText("*All Fields must be filled");
    }
    if(ReTypedPassword == " "){
        ui->CheckRegisterFields->setVisible(true);
        ui->CheckRegisterFields->setText("*All Fields must be filled");
    }
    if(Day == " "){
        ui->CheckRegisterFields->setVisible(true);
        ui->CheckRegisterFields->setText("*All Fields must be filled");
    }
    if(year == " "){
        ui->CheckRegisterFields->setVisible(true);
        ui->CheckRegisterFields->setText("*All Fields must be filled");
    }
    if(Month == " "){
        ui->CheckRegisterFields->setVisible(true);
        ui->CheckRegisterFields->setText("*All Fields must be filled");
    }
    if(Gender == " "){
        ui->CheckRegisterFields->setVisible(true);
        ui->CheckRegisterFields->setText("*All Fields must be filled");
    }
    if(AccType == " "){
        ui->CheckRegisterFields->setVisible(true);
        ui->CheckRegisterFields->setText("*All Fields must be filled");
    }
    if(FavGenre == " "){

        ui->CheckRegisterFields->setVisible(true);
        ui->CheckRegisterFields->setText("*All Fields must be filled");
    }




}
