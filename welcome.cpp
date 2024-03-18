#include "welcome.h"
#include "ui_welcome.h"
#include "habittracker.h"
#include "login.h"
#include "signup.h"

Welcome::Welcome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_login_clicked()
{
    this->close();
    login *loginWindow = new login; // Corrected line
    loginWindow->setAttribute(Qt::WA_DeleteOnClose);
    loginWindow->show();
}


void Welcome::on_signup_clicked()
{
    this->close();
    signup *signupwindow = new signup; // Corrected line
    signupwindow->setAttribute(Qt::WA_DeleteOnClose);
    signupwindow->show();
}

