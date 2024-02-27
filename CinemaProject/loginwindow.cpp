#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "welcomewindow.h"
#include "registerwindow.h"
#include "users.h"



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
            // Successful login, show WelcomeWindow
            WelcomeWindow *welcomeWindow = new WelcomeWindow(nullptr);
            welcomeWindow->show();
            this->hide();
            break;
        }
    }

    // Show error message if login failed
    if (!found) {
        ui->label_error->setText("Wrong username or password!");
        ui->label_error->setVisible(true);
    }
}


void LoginWindow::on_pushButton_register_clicked()
{
    RegisterWindow *registerWindow = new RegisterWindow(nullptr);
    registerWindow->show();
    this->hide();
}

