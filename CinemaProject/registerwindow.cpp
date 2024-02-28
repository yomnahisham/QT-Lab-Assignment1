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
    int age = 2024 - Year;

    bool isMale = ui->MaleRadioButton->isChecked();
    bool isFemale = ui->FemaleRadioButton->isChecked();
    bool isAdmin = ui->AdminRadioButton->isChecked();
    bool isUser = ui->UserRadioButton->isChecked();

    bool hasError = false;

    //Checking if username is left empty and if not empty, checks if username already exists
    if (Username.isEmpty()) {
        ui->label_usernamecheck->setText("* Please enter a username.");
        ui->label_usernamecheck->setVisible(true);
        hasError = true;
    } else {
        for (int i = 0; i < usersCount; ++i) {
            if (usernames[i] == Username) {
                ui->label_usernamecheck->setText("* Username Unavailable.");
                ui->label_usernamecheck->setVisible(true);
                hasError = true;
                break;
            } else {
                ui->label_usernamecheck->setVisible(false);
            }
        }
    }


    //Checking if both passwords match or if password/retypedpassword were left empty
    if (ReTypedPassword.isEmpty() || Password.isEmpty() || ReTypedPassword != Password) {
        ui->label_matchingpasscheck->setText("* Passwords do not match.");
        ui->label_matchingpasscheck->setVisible(true);
        hasError = true;
    } else {
        ui->label_matchingpasscheck->setVisible(false);
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
