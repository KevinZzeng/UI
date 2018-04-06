#include "user_index.h"
#include "ui_user_index.h"
#include "iostream"
#include "string"
#include "QString"
#include "QStringListModel"
#include "QStandardItemModel"
#include "QTableView"
#include "list"
#include "md5.h"
#include "Utils.h"
#include "Student.h"
#include "StudentMajor.h"
#include "QFileDialog"
#include "Book.h"
#include "QMessageBox"
using namespace std;
User_Index::User_Index(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::User_Index)
{
    ui->setupUi(this);
    ui->ediInfor->setVisible(false);
    ui->book_manage->setVisible(false);
    bindBorrowItem();

//    //用户登陆初始化个人中心
//    Student s1(1, "test", "password", "嘻嘻嘻", 0, "/images/lib.png", 0, "337118043@qq.com", Student_NORMAL);
//    student = s1;
//    StudentMajor sm;
//    sm.setMajor("tests");
//    sm.setId(-1);
//    sm.save();
//    int id= StudentMajor::getIDByMajor("tests");
//    QString style = QString::fromLocal8Bit("image:url(") + dirpath + QString::fromLocal8Bit(student.getPhoto().c_str()) + QString::fromLocal8Bit(");");
//    ui->cover->setStyleSheet(style);
//    ui->label_2->setText(QString::fromLocal8Bit((student.getNumberID() + "," + student.getName()).c_str()));
//    ui->label_3->setText(QString::fromLocal8Bit((StudentMajor::getMajorByID(student.getMajor())).c_str()));
//    ui->label_4->setText(QString::fromLocal8Bit(("当前欠费:" + to_string(student.getMoney()) + "元").c_str()));
//    int now_book = 2;
//    ui->label_5->setText(QString::fromLocal8Bit(("当前借阅:" + to_string(now_book) + "本").c_str()));
//	ui->cover_3->setStyleSheet(style);
}

User_Index::~User_Index()
{
    delete ui;
}

//void User_Index::setStudent(Student& student) {	//初始化学生信息
//    this->student = student;
//}

void User_Index::on_pushButton_clicked()    //"个人中心"
{
    changeMune();
    ui->pushButton->setStyleSheet(click_mune);
    ui->book_manage->setVisible(false);
    ui->ediInfor->setVisible(false);
    ui->PersonUp->setVisible(true);
    ui->PersonDown->setVisible(true);
    ui->tableView->setVisible(true);
    ui->label_7->setVisible(true);
    bindBorrowItem();
}

void User_Index::on_pushButton_2_clicked()  //"图书管理"
{
    changeMune();
    ui->pushButton_2->setStyleSheet(click_mune);
    ui->book_manage->setVisible(true);
    ui->bookInformation->setVisible(false);
    ui->search->setVisible(false);
    //绑定分类
	//ui->cbxClass->
    //ui->cbxClass->addItem(QString::fromLocal8Bit("全部"));
    //ui->cbxClass->addItem(QString::fromLocal8Bit("分类一"));

}

void User_Index::on_pushButton_3_clicked()  //"预约记录"
{
    changeMune();
    ui->pushButton_3->setStyleSheet(click_mune);

}

void User_Index::on_pushButton_4_clicked()  //"借阅管理"
{
    changeMune();
    ui->pushButton_4->setStyleSheet(click_mune);
}

void User_Index::on_pushButton_5_clicked()  //"收藏书目"
{
    changeMune();
    ui->pushButton_5->setStyleSheet(click_mune);

}


void User_Index::on_pushButton_6_clicked()  //"消息提示"
{
    changeMune();
    ui->pushButton_6->setStyleSheet(click_mune);
}

void User_Index::on_pushButton_7_clicked()  //"退出登陆"
{
	alert("退出成功！");
	this->close();
}


void User_Index::on_pushButton_8_clicked()  //修改个人信息按钮
{
    //cout << "hsdhfa" << endl;
}



void User_Index::on_btnEdiInfor_clicked()	//修改个人信息按钮
{
    ui->ediInfor->setVisible(true);
    ui->PersonUp->setVisible(false);
    ui->PersonDown->setVisible(false);
    ui->tableView->setVisible(false);
    ui->label_7->setVisible(false);
    ui->txtEdiPwd->setEchoMode(QLineEdit::Password);    //设置密码格式
    ui->txtEdiPwdre->setEchoMode(QLineEdit::Password);
}

void User_Index::on_pushButton_9_clicked()	//选择头像
{
    QString fileName = QFileDialog::getOpenFileName(this, "File Dialog", dirpath, "Picture(* png * jpg)");
    if(!fileName.isEmpty()){
		QString style = QString::fromLocal8Bit("image:url(") + fileName + QString::fromLocal8Bit(");");
		ui->cover_3->setStyleSheet(style);
        changeCoverFileName = fileName;     //私有变量changeCoverFileName临时存储待设置的头像文件名
    }
    else{   //点击取消,并未上传
		changeCoverFileName = "";
    }
}

void User_Index::on_chaPwd_clicked()	//修改密码
{
	string pwd = ui->txtEdiPwd->text().toStdString();
	string repwd = ui->txtEdiPwdre->text().toStdString();
	if (pwd.length() == 0 || repwd.length() == 0)
		alert("输入不能为空！");
	else if (pwd != repwd)
		alert("前后输入不一致！");
	else {
		//student.setPassword(pwd);
		//student.save();
		alert("修改成功！");
		ui->txtEdiPwd->setText("");
		ui->txtEdiPwdre->setText("");
	}

}


void User_Index::on_chaPwd_2_clicked()  //  更换头像
{
	if (changeCoverFileName == "") {
		alert("请选择文件！");
	}
	else {
        string name;
        //string name = MD5(Utils::getNowTime()).toStr32();
		ifstream fin(changeCoverFileName.toStdString().c_str(), std::ifstream::binary);
		ofstream fout((dirpath.toStdString() + "/images/" + name + ".JPG").c_str(), std::ofstream::binary);
		char szBuf[1] = { 0 };
		while (fin.read(szBuf, sizeof(char) * 1))
		{
			fout.write(szBuf, sizeof(char) * 1);
		}
		fin.close();
		fout.close();
//		student.setPhoto("/images/" + name + ".JPG");
//		student.save();
		alert(" 修改成功！ ");
		QString style = QString::fromLocal8Bit("image:url(") + changeCoverFileName + QString::fromLocal8Bit(");");
		ui->cover->setStyleSheet(style);
	}

}

void User_Index::on_PersonDown_clicked()    //个人中心--下一页
{

}

void User_Index::on_PersonUp_clicked()      //个人中心--上一页
{

}

void User_Index::on_tableView_doubleClicked(const QModelIndex &index)       //个人中心tableview双击事件
{
    cout << index.column() << "  " << index.row() << endl;
}

void User_Index::on_recommend_1_clicked()	//个人推荐书1
{
    cout << "recommend_1" << endl;
    bindBookInfor();
    ui->bookInformation->setVisible(true);
}

void User_Index::on_recommend_2_clicked()	//个人推荐书2
{

}

void User_Index::on_recommend_3_clicked()	//个人推荐书3
{

}

void User_Index::on_recommend_4_clicked()	//个人推荐书4
{

}


void User_Index::on_btnBorrow_clicked()	//书籍详情--借阅书籍
{

}

void User_Index::on_btnLike_clicked()	//书籍详情--收藏书籍
{

}

void User_Index::on_btnOrder_clicked()	//书籍详情--预约书籍
{

}

void User_Index::on_search_down_clicked()	//搜索结果--下一页
{

}

void User_Index::on_search_up_clicked()		//搜索结果--上一页
{

}

void User_Index::on_search_botton_clicked()	//搜索
{

}

/* ================= 功能性方法 ================= */

void User_Index::changeMune() {          //设置默认样式
	ui->pushButton->setStyleSheet(normal_mune);
	ui->pushButton_2->setStyleSheet(normal_mune);
	ui->pushButton_3->setStyleSheet(normal_mune);
	ui->pushButton_4->setStyleSheet(normal_mune);
	ui->pushButton_5->setStyleSheet(normal_mune);
	ui->pushButton_6->setStyleSheet(normal_mune);
}

void User_Index::alert(string message) {		//弹窗
	QApplication::setQuitOnLastWindowClosed(false);
	QMessageBox mess(QMessageBox::Information, "", QString::fromLocal8Bit(message.c_str()), NULL);
	mess.exec();
}

void User_Index::bindBorrowItem() {			//绑定个人中心的借阅信息
	QStandardItemModel *model = new QStandardItemModel();
	model->setColumnCount(8);
	model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("ISBN"));
	model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("书名"));
	model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("借阅日期"));
	model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("归还日期"));
	model->setHeaderData(4, Qt::Horizontal, QString::fromLocal8Bit("应还日期"));
	model->setHeaderData(5, Qt::Horizontal, QString::fromLocal8Bit("是否续借"));
	model->setHeaderData(6, Qt::Horizontal, QString::fromLocal8Bit("续借"));
	model->setHeaderData(7, Qt::Horizontal, QString::fromLocal8Bit("还书"));
	ui->tableView->setModel(model);
	ui->tableView->setShowGrid(false);
	ui->tableView->setStyleSheet("selection-color:#333;selection-background-color:rgba(0,0,0,0);border:none;font-size:16px;");
	//表头信息显示居左
	ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
	ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);      //  设置不可编辑
	for (int i = 1; i < 6; i++)
		ui->tableView->setColumnWidth(i, 95);
	//    ui->tableView->setColumnWidth(0,170);
	for (int i = 0; i < 6; i++)
	{
		model->setItem(i, 0, new QStandardItem("20094416761234567"));
		//设置字符位置
		model->setItem(i, 1, new QStandardItem(QString::fromLocal8Bit("海边兔子有所思")));
		model->setItem(i, 2, new QStandardItem(QString::fromLocal8Bit("2018/04/06")));
		model->setItem(i, 3, new QStandardItem(QString::fromLocal8Bit("--")));
		model->setItem(i, 4, new QStandardItem(QString::fromLocal8Bit("2018/05/06")));
		model->setItem(i, 5, new QStandardItem(QString::fromLocal8Bit("是")));
		model->setItem(i, 6, new QStandardItem(QString::fromLocal8Bit("续借")));
		model->setItem(i, 7, new QStandardItem(QString::fromLocal8Bit("还书")));
		model->item(i, 0)->setTextAlignment(Qt::AlignCenter);
	}
}

void User_Index::bindRecommend() {       //绑定个人推荐
	QString fileName = "images/lib.png";
	ui->recommend_1->setStyleSheet("border-image:url(" + dirpath + "/images/lib.png);");
	ui->bookInformation->setVisible(true);
}

void User_Index::bindBookInfor() {			//绑定书籍详情
	QString fileName = "/images/s29715023.jpg";
	ui->bookCover->setStyleSheet("border-image:url(" + dirpath + fileName + ");");
	ui->bookAuthor->setText(QString::fromLocal8Bit("张炜 "));
	ui->bookTitle->setText(QString::fromLocal8Bit("海边兔子有所思"));
	ui->bookPublish->setText(QString::fromLocal8Bit("长江文艺出版社"));
	ui->bookClass->setText(QString::fromLocal8Bit("好书，值得一读"));
	ui->bookContent->setWordWrap(true);
	ui->bookContent->setText(QString::fromLocal8Bit("如果一个写作者胡编乱造，就不如记录一些真实发生的事情更好。\n本书收录张炜近年来在海边居住对人生、事物以及写作的观察和思索。他喜欢“小地方”，不习惯吵闹。平时觉得有机会写出自己的心情已经很幸福了。\n写出好的文字，就有一份自我欣赏的快乐。 本书希望能够给读者带来这份写作者的宁静和快乐。\n同时收录今年来张炜重要创作篇目之创作感悟。"));
}


