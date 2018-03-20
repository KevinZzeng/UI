//#include "mainwindow.h"
#include <QApplication>
//#include "dialog.h"
#include "user_index.h"
#include "user_login.h"
#include "iostream"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    User_Index ul;
//    User_login ul;
    ul.show();
    return a.exec();
}
