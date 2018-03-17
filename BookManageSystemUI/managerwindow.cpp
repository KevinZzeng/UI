#include "managerwindow.h"
#include "ui_managerwindow.h"

managerWindow::managerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::managerWindow)
{
    ui->setupUi(this);
}

managerWindow::~managerWindow()
{
    delete ui;
}
