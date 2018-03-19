#include "user_login.h"
#include "ui_user_login.h"
#include "iostream"

User_login::User_login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::User_login)
{
    ui->setupUi(this);
}

User_login::~User_login()
{
    delete ui;
}

void User_login::on_pushButton_clicked()
{
    //cout << "sss" << endl;
}
