#include "loginwindow.h"
#include "managerwindow.h"
#include "user_index.h"
#include "user_login.h"
#include <QApplication>
#include <QHBoxLayout>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    managerWindow m;
//    m.show();

    User_Login us;
//    us.show();

    User_Index u;
    u.show();
    //QImage image=new QImage("images/left1.jpg");
    //image.s
    return a.exec();
}
