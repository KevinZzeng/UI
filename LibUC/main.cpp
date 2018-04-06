#include "loginwindow.h"
#include "managerwindow.h"
#include "user_index.h"
#include "user_login.h"
#include <QApplication>
#include <iostream>
#include <QHBoxLayout>
#include <QDir>
#include <QString>
#include <string>
using namespace  std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    User_Login u;
	//u.setQuitOnLastWindowClosed(false);
    //u.set
	u.show();

    return a.exec();
}
