#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H

#include <QWidget>
#include <QStandardItem>
namespace Ui {
class managerWindow;
}

class managerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit managerWindow(QWidget *parent = 0);
    ~managerWindow();

private slots:
    void timerUpdate();     //自定义槽

private:
    Ui::managerWindow *ui;
    QStandardItemModel* userinfo_model;
    QStandardItemModel* bookinfo_model;
    void initialize();      //窗口数据初始化
};

#endif // MANAGERWINDOW_H
