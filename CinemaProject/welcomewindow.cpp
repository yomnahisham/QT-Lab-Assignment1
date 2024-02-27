#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QPixmap>

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
}

WelcomeWindow::~WelcomeWindow()
{
    QPixmap pix (":resources/pics/Cinema.jpg");
    int w = ui->PicLabel->width();
    int h = ui->PicLabel->height();
    ui-> PicLabel -> setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
    delete ui;
}
