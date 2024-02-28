#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "welcomewindow.h"
#include "registerwindow.h"
#include "users.h"

#include <QString>

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->label_error->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    bool found = false;
    for (int i = 0; i < usersCount; ++i) {
        if (usernames[i] == username && passwords[i] == password) {
            found = true;
            int userAge = ages[i];
            hide();
            WelcomeWindow *welcomeWindow = new WelcomeWindow(username, userAge, nullptr);
            welcomeWindow->show();
            break;
        }
    }

    if (!found) {
        ui->label_error->setStyleSheet("QLabel { color : red; }");
        ui->label_error->setText("Wrong username or password!");
        ui->label_error->setVisible(true);
    }
}


void LoginWindow::on_pushButton_register_clicked()
{
    hide();
    RegisterWindow *registerWindow = new RegisterWindow(nullptr);
    registerWindow->show();
}

