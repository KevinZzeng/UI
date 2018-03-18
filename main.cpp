//#include "mainwindow.h"
#include <QApplication>
//#include "dialog.h"
#include "user_login.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    User_login ul;
    ul.show();
    return a.exec();
}
