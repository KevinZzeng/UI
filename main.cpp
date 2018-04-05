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
    managerWindow m;
//    m.show();

    User_Login us;
//    us.show();

    User_Index u;
    u.show();

//    QString folderPathQt = QDir::currentPath();
//    string aaaa = folderPathQt.toStdString();
//    cout << aaaa << endl;
    return a.exec();
}
