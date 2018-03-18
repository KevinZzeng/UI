#ifndef USER_LOGIN_H
#define USER_LOGIN_H

#include <QWidget>

namespace Ui {
class User_login;
}

class User_login : public QWidget
{
    Q_OBJECT

public:
    explicit User_login(QWidget *parent = 0);
    ~User_login();

private:
    Ui::User_login *ui;
};

#endif // USER_LOGIN_H
