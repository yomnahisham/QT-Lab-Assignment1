#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "users.h"
#include "welcomewindow.h"

#include <QString>

RegisterWindow::RegisterWindow(QWidget *parent) : QDialog(parent), ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->label_usernamecheck->setVisible(false);
    ui->label_agecheck->setVisible(false);
    ui->label_matchingpasscheck->setVisible(false);
    ui->CheckInputs->setVisible(false);
    ui->label_matchingpasscheck->setStyleSheet("QLabel { color : red; }");
    ui->label_usernamecheck->setStyleSheet("QLabel { color : red; }");
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
    ui->CheckInputs->setVisible(false);

    //Saving all the user input in variables
    QString Username =  ui->UserLineEdit->text();
    QString Password = ui->PassLineEdit->text();
    QString ReTypedPassword =  ui->RetypeLineEdit->text();
    QString selectedYearStr = ui->YearComboBox->currentText();
    QString selectedMonthStr = ui->MonthComboBox->currentText();
    QString selectedDayStr = ui->DayComboBox->currentText();

    int Year = selectedYearStr.toInt();
    int CurrentYear = 2024;
    int age = CurrentYear - Year;

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
                ui->label_usernamecheck->setText("* Username already exits.");
                ui->label_usernamecheck->setVisible(true);
                hasError = true;
                break;
            } else {
                ui->label_usernamecheck->setVisible(false);
            }
        }
    }

    //Checking if both passwords match or if password/retypedpassword were left empty
    if (ReTypedPassword.isEmpty() || Password.isEmpty()){

        ui->label_matchingpasscheck->setText("* Please enter a password");
        ui->label_matchingpasscheck->setVisible(true);
        hasError = true;

    }else if(ReTypedPassword != Password) {
        ui->label_matchingpasscheck->setText("* Passwords do not match.");
        ui->label_matchingpasscheck->setVisible(true);
        hasError = true;
    } else {
        ui->label_matchingpasscheck->setVisible(false);
    }

    //Checking if age is below 12
    if (age < 12 || selectedYearStr.isEmpty() || selectedMonthStr.isEmpty() || selectedDayStr.isEmpty()) {
        ui->label_agecheck->setStyleSheet("QLabel { color : red; }");
        ui->label_agecheck->setText("* Invaild age.");
        ui->label_agecheck->setVisible(true);
        hasError = true;
    } else {
        ui->label_agecheck->setVisible(false);
    }

    //Checking if all raidobutton were left empty (to print out error)
    if ((isMale == false && isFemale == false) || (isAdmin == false && isUser == false) ){
        hasError = true;
    }

    //Checking if all checkboxes were left empty (to print out error)
    if (!ui->DramaCheckBox->isChecked() && !ui->ActionCheckBox->isChecked() && !ui->RomanceCheckBox->isChecked() && !ui->ComedyCheckBox->isChecked() && !ui->HorrorCheckBox->isChecked() && !ui->OtherCheckBox->isChecked()) {
        hasError = true;
    }

    if (!hasError) {
        usernames[usersCount] = Username;
        passwords[usersCount] = Password;
        ages[usersCount] = age;
        usersCount++;

        WelcomeWindow *welcomeWindow = new WelcomeWindow(Username, age, nullptr);
        welcomeWindow->show();

        this->close();

    } else {
        ui->CheckInputs->setStyleSheet("QLabel { color : red; }");
        ui->CheckInputs->setText("* All fields must be filled.");
        ui->CheckInputs->setVisible(true);
    }
}
