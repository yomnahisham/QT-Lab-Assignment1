#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QPixmap>
#include <QFont>
#include "loginwindow.h"

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    QPixmap pix (":resources/pics/Cinema.jpg");
    int w = ui->PicLabel->width();
    int h = ui->PicLabel->height();
    ui-> PicLabel -> setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
    QFont font;
    font.setPointSize(20);
    font.setFamily("times");
    font.setWeight(QFont::Bold);
    ui->WelcLabel -> setFont(font);
    ui->WelcLabel->setStyleSheet("QLabel {color: black; }");
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_LogOutButton_clicked()
{
    this->hide();
    LoginWindow *login = new LoginWindow;
    login->show();
}

