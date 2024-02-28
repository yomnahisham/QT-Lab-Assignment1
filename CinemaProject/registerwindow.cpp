#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "users.h"
#include <QString>
#include "welcomewindow.h"


#include <QDate>

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->label_usernamecheck->setVisible(false);
    ui->label_agecheck->setVisible(false);
    ui->label_matchingpasscheck->setVisible(false);
    ui->CheckRegisterFields->setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_RegisterButton_clicked()
{

    ui->label_usernamecheck->setVisible(false);
    ui->label_agecheck->setVisible(false);
    ui->label_matchingpasscheck->setVisible(false);
    ui->CheckRegisterFields->setVisible(false);

    //Saving all the user input in variables
    QString Username =  ui->UserLineEdit->text();
    QString Password = ui->PassLineEdit->text();
    QString ReTypedPassword =  ui->RetypeLineEdit->text();
    QString YearStr = ui->YearComboBox->currentText();
    int Year = YearStr.toInt();



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
    int CurrentYear = 2024;
    int Age = CurrentYear - Year;
    if(Age < 12){
        ui->label_agecheck->setText("* Age is below 12");
        ui->label_agecheck->setVisible(true);
    }

    bool InputError = false;


    if(InputError){
        ui->CheckRegisterFields->setText("*All fileds must be filled");
        ui->CheckRegisterFields->setVisible(true);
    }else{
        usernames[usersCount] = Username;
        passwords[usersCount] = Password;
        ages[usersCount] = Age;
        ++usersCount;
        this->hide();
        WelcomeWindow *Welc = new WelcomeWindow(Username, Age);
        Welc->show();

    }

}
