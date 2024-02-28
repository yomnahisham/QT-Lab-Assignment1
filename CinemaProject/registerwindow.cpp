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
    ui->label_usernamecheck->setStyleSheet("QLabel {color: red};");
    ui->label_usernamecheck->setVisible(false);

    ui->label_agecheck->setStyleSheet("QLabel {color: red};");
    ui->label_agecheck->setVisible(false);

    ui->label_matchingpasscheck->setStyleSheet("QLabel {color: red};");
    ui->label_matchingpasscheck->setVisible(false);


    ui->CheckInputs->setStyleSheet("QLabel {color: red};");
    ui->CheckInputs->setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_RegisterButton_clicked()
{
    //Saving all the user input in variables
    QString Username =  ui->UserLineEdit->text();
    QString Password = ui->PassLineEdit->text();
    QString ReTypedPassword =  ui->RetypeLineEdit->text();
    QString Month = ui->MonthComboBox->currentText();
    QString Day = ui->DayComboBox->currentText();
    QString year = ui->YearComboBox->currentText();
    QString Gender;
    QString AccType;
    QString FavGenre;

    bool Male = ui->MaleRadioButton->isChecked();
    bool Female = ui->MaleRadioButton->isChecked();
    bool User = ui->UserRadioButton->isChecked();
    bool Admin = ui->AdminRadioButton->isChecked();
    bool Action = ui->ActionCheckBox->isChecked();
    bool Romance = ui->RomanceCheckBox->isChecked();
    bool Comedy = ui->ComedyCheckBox->isChecked();
    bool Drama = ui->DramaCheckBox->isChecked();
    bool Horror = ui->HorrorCheckBox->isChecked();
    bool Other = ui->OtherCheckBox->isChecked();



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
    }else if(ui->HorrorCheckBox->isChecked()){
        FavGenre = "Horrot";
    }else if(ui->OtherCheckBox->isChecked()){
       FavGenre = "Other";
    }

    //Checking if username already exists in the usernames array
    for(int i = 0; i < 100; i++){
        if(Username == usernames[i]){
            ui->label_usernamecheck->setText("* Username already exists");
            ui->label_usernamecheck->setVisible(true);
         }
    }

    //Checking if both passwords match
    if(Password != ReTypedPassword){
        ui->label_matchingpasscheck->setText("* Passwords dont match");
        ui->label_matchingpasscheck->setVisible(true);
    }

    //Checking if age is below 12
    int Year = year.toInt();
    int CurrentYear = 2024;
    int Age = CurrentYear - Year;
    if(Age < 12){
        ui->label_agecheck->setText("* Age is below 12");
        ui->label_agecheck->setVisible(true);
    }

    bool InputError = false;

    //Checking if there's an empty field
    if(Username.isEmpty() || Password.isEmpty() || ReTypedPassword.isEmpty() || ui->DayComboBox->currentIndex() < 0 ||
        ui->MonthComboBox->currentIndex() < 0 || ui->YearComboBox->currentIndex() < 0 || (!Male && !Female) || (!User && !Admin) ||
        (!Action && !Horror && !Comedy && !Other && !Romance && !Drama)){
        InputError = true;
    }
    if(InputError){
        ui->CheckInputs->setText("*All fileds must be filled");
        ui->CheckInputs->setVisible(true);
    }

}
