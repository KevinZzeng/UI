#include "user_index.h"
#include "ui_user_index.h"

User_Index::User_Index(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::User_Index)
{
    ui->setupUi(this);
}

User_Index::~User_Index()
{
    delete ui;
}
