#include "user_index.h"
#include "ui_user_index.h"
#include "iostream"
#include "string"
#include "QString"
#include "QStringListModel"
#include "QStandardItemModel"
#include "QTableView"
#include "list"
#include <QFileDialog>
using namespace std;
User_Index::User_Index(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::User_Index)
{
    ui->setupUi(this);
    ui->ediInfor->setVisible(false);
    ui->book_manage->setVisible(false);
    bindBorrowItem();
}

User_Index::~User_Index()
{
    delete ui;
}

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

    //绑定分类
    ui->cbxClass->addItem(QString::fromLocal8Bit("全部"));
    ui->cbxClass->addItem(QString::fromLocal8Bit("分类一"));
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

}


void User_Index::on_pushButton_8_clicked()  //修改个人信息按钮
{
    cout << "hsdhfa" << endl;
}


/* ================= 功能性方法 ================= */

void User_Index::changeMune(){          //设置默认样式
    ui->pushButton->setStyleSheet(normal_mune);
    ui->pushButton_2->setStyleSheet(normal_mune);
    ui->pushButton_3->setStyleSheet(normal_mune);
    ui->pushButton_4->setStyleSheet(normal_mune);
    ui->pushButton_5->setStyleSheet(normal_mune);
    ui->pushButton_6->setStyleSheet(normal_mune);
}

void User_Index::bindBorrowItem(){
    QStandardItemModel *model = new QStandardItemModel();
    model->setColumnCount(8);
    model->setHeaderData(0,Qt::Horizontal,QString::fromLocal8Bit("ISBN"));
    model->setHeaderData(1,Qt::Horizontal,QString::fromLocal8Bit("书名"));
    model->setHeaderData(2,Qt::Horizontal,QString::fromLocal8Bit("借阅日期"));
    model->setHeaderData(3,Qt::Horizontal,QString::fromLocal8Bit("归还日期"));
    model->setHeaderData(4,Qt::Horizontal,QString::fromLocal8Bit("应还日期"));
    model->setHeaderData(5,Qt::Horizontal,QString::fromLocal8Bit("是否续借"));
    model->setHeaderData(6,Qt::Horizontal,QString::fromLocal8Bit("续借"));
    model->setHeaderData(7,Qt::Horizontal,QString::fromLocal8Bit("还书"));
    ui->tableView->setModel(model);
    //表头信息显示居左
    ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);      //  设置不可编辑
    for(int i = 1 ; i < 6;i++ )
        ui->tableView->setColumnWidth(i,95);
//    ui->tableView->setColumnWidth(0,170);
//    ui->tableView->setColumnWidth(6,50);
//    ui->tableView->setColumnWidth(7,50);
    for(int i = 0; i < 6; i++)
    {
        model->setItem(i,0,new QStandardItem("20094416761234567"));
        //设置字符颜色

        model->item(i,0)->setForeground(QBrush(QColor(255, 0, 0)));
        //设置字符位置
        model->setItem(i,1,new QStandardItem(QString::fromLocal8Bit("哈哈")));
        model->setItem(i,2,new QStandardItem(QString::fromLocal8Bit("哈哈")));
        model->setItem(i,3,new QStandardItem(QString::fromLocal8Bit("哈哈")));
        model->setItem(i,4,new QStandardItem(QString::fromLocal8Bit("哈哈")));
        model->setItem(i,5,new QStandardItem(QString::fromLocal8Bit("哈哈")));
        model->setItem(i,6,new QStandardItem(QString::fromLocal8Bit("哈哈")));
        model->setItem(i,7,new QStandardItem(QString::fromLocal8Bit("哈哈")));
        model->item(i,0)->setTextAlignment(Qt::AlignCenter);
    }
}

void User_Index::bindRecommend(){       //绑定个人推荐
    QString fileName = "images/lib.png";
    QPixmap *pixmap = new QPixmap(fileName);
    pixmap->scaled(ui->recommend_1->size(), Qt::KeepAspectRatio);
    //QIcon* qicon = new QIcon(*pixmap);
    ui->recommend_1->setIcon(*(new QIcon(*pixmap)));

}

//void User_Index::on_tableView_clicked(const QModelIndex &index)
//{

//    //cout <<
//}

void User_Index::on_btnEdiInfor_clicked()
{
    ui->ediInfor->setVisible(true);
    ui->PersonUp->setVisible(false);
    ui->PersonDown->setVisible(false);
    ui->tableView->setVisible(false);
    ui->label_7->setVisible(false);
    ui->txtEdiPwd->setEchoMode(QLineEdit::Password);    //设置密码格式
    ui->txtEdiPwdre->setEchoMode(QLineEdit::Password);
}

void User_Index::on_pushButton_9_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "File Dialog", QCoreApplication::applicationFilePath(), "Picture(* png * jpg)");

    if(!fileName.isEmpty()){
        //QImage* image = new QImage(fileName);
        QPixmap *pixmap = new QPixmap(fileName);
        pixmap->scaled(ui->cover_3->size(), Qt::KeepAspectRatio);
        ui->label->setScaledContents(true);
        ui->cover_3->setPixmap(*pixmap);
        changeCoverFileName = fileName;     //私有变量changeCoverFileName临时存储待设置的头像文件名
    }
    else{   //点击取消,并未上传

    }
    //qDebug()<<fileName;
}

void User_Index::on_chaPwd_2_clicked()  //  更换头像
{

}

void User_Index::on_PersonDown_clicked()    //个人中心--下一页
{

}

void User_Index::on_PersonUp_clicked()      //个人中心--上一页
{

}


void User_Index::on_tableView_doubleClicked(const QModelIndex &index)       //个人中心借阅信息双击事件
{
    cout << index.column() << "  " << index.row() << endl;
}
