#ifndef USER_INDEX_H
#define USER_INDEX_H

#include <QWidget>

namespace Ui {
class User_Index;
}

class User_Index : public QWidget
{
    Q_OBJECT

public:
    explicit User_Index(QWidget *parent = 0);
    ~User_Index();

private:
    Ui::User_Index *ui;
};

#endif // USER_INDEX_H
