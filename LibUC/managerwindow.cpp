#include "managerwindow.h"
#include "ui_managerwindow.h"
#include "QStandardItem"
#include <QTimer>
#include <qdatetime.h>

managerWindow::managerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::managerWindow)
{
    ui->setupUi(this);
    userinfo_model = new QStandardItemModel();
    bookinfo_model = new QStandardItemModel();
    this->initialize();
    //设置时间标签
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer->start(1000);
}

managerWindow::~managerWindow()
{
    delete ui;
}

void managerWindow::timerUpdate()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->lbl_time->setText(str);
}

void managerWindow::initialize()
{
    //初始化用户表格式
    QStringList userlabels = QObject::trUtf8("学号,姓名,专业,借阅记录").simplified().split(",");
    userinfo_model->setHorizontalHeaderLabels(userlabels);
    ui->tblView_userinfo->setModel(userinfo_model);
    ui->tblView_userinfo->show();
    //初始化图书表格式
    QStringList booklabels = QObject::trUtf8("LSBN,书名,作家,出版,数量").simplified().split(",");
    bookinfo_model->setHorizontalHeaderLabels(booklabels);
    ui->tblView_bookinfo->setModel(bookinfo_model);
    ui->tblView_bookinfo->show();
    //设置列宽根据文本自动调节
    ui->tblView_bookinfo->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tblView_userinfo->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    // userinfo_model->removeRow(x);  //删除指定行
    // ui->tblView_bookinfo->currentIndex().row();  //获得选中行
    /*
     QModelIndexmdidx=m_ui->tbList->model()->index(row,column); //获得需要编辑的单元格的位置
     m_ui->tbList->setFocus(); //把输入焦点交给tbList
     m_ui->tbList->setCurrentIndex(mdidx); //设定需要编辑的单元格
     m_ui->tbList->edit(mdidx); //开始编辑
    */
}

