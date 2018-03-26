#include "user_login.h"
#include "ui_user_login.h"
#include "iostream"
using namespace std;

User_Login::User_Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::User_Login)
{
    ui->setupUi(this);
}

User_Login::~User_Login()
{
    delete ui;
}

void User_Login::on_pushButton_clicked()
{
cout << "hshfda" << endl;
}


void User_Login::on_pushButton_2_clicked()
{
this->close();
}
