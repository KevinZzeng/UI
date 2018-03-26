#ifndef USER_LOGIN_H
#define USER_LOGIN_H

#include <QMainWindow>

namespace Ui {
class User_Login;
}

class User_Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit User_Login(QWidget *parent = 0);
    ~User_Login();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::User_Login *ui;
};

#endif // USER_LOGIN_H
