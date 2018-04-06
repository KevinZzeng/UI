#include "user_login.h"
#include "ui_user_login.h"
#include "iostream"
#include "QString"
#include "string"
#include "Student.h"
#include "QMessageBox"
#include "user_index.h"
using namespace std;

User_Login::User_Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::User_Login)
{
    ui->setupUi(this);
    ui->txtLine->setEchoMode(QLineEdit::Password);
}

User_Login::~User_Login()
{
    delete ui;
}

void User_Login::on_pushButton_clicked()	//登陆
{   
	if (ui->lineEdit_2->text().length() == 0 || ui->txtLine->text().length() == 0)
		alert("输入不能为空!");
	else {
		//Student stu;
		bool flag = true;
		//bool flag =  stu.login(ui->lineEdit_2->text(),ui->txtLine->text() );
		if (flag) {
			alert("登陆成功！");
			this->hide();
			User_Index* uindex = new User_Index(this);
			uindex->show();
		}
		else {
			alert("登陆失败！");

		}
	}

}


void User_Login::alert(char* message) {		//弹窗
	QApplication::setQuitOnLastWindowClosed(false);
	QMessageBox mess(QMessageBox::Information, "", QString::fromLocal8Bit(message), NULL);
	mess.exec();
}


void User_Login::on_pushButton_2_clicked()
{
	this->close();
}
