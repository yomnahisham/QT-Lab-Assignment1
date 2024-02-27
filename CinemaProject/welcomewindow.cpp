#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QPixmap>
#include <QFont>
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
    ui->WelcLabel -> setFont(font);
    ui->WelcLabel->setStyleSheet("QLabel {color: black; }");
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}
