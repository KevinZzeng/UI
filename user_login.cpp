#include "user_login.h"
#include "ui_user_login.h"

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
