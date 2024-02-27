#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "welcomewindow.h"
#include "registerwindow.h"


LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_pushButton_login_clicked()
{
    hide ();
    WelcomeWindow *  welcome = new WelcomeWindow;
    welcome -> show();
}


void LoginWindow::on_pushButton_register_clicked()
{
    this->hide();
    RegisterWindow *regy = new RegisterWindow;
    regy->show();
}

