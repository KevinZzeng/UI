#include "user_login.h"
#include "ui_user_login.h"
#include "iostream"
using namespace std;

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

void User_login::on_pushButton_clicked()    //登录按钮
{
    cout << "sss" << endl;
}

void User_login::on_pushButton_2_clicked()  //管理员登录按钮
{

}
