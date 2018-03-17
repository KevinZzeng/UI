#include "loginwindow.h"
#include <QApplication>
#include <QHBoxLayout>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginWindow w;
    w.show();
    QHBoxLayout *layout = new QHBoxLayout;
    QObject::connect(w.pushButton,SIGNAL(clicked()),&a,SLOT(quit()));
    return a.exec();
}
