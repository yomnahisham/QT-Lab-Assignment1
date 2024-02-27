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

}


void LoginWindow::on_pushButton_register_clicked()
{
    RegisterWindow *registerWindow = new RegisterWindow(nullptr);
    registerWindow->show();
    this->hide();
}

