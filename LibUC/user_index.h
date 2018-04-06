#ifndef USER_INDEX_H
#define USER_INDEX_H

#include <QMainWindow>
#include <QString>
#include <list>
#include <string>
#include "QDir"
#include "Book.h"
#include "Student.h"
namespace Ui {
class User_Index;
}

class User_Index : public QMainWindow
{
    Q_OBJECT

public:
    explicit User_Index(QWidget *parent = 0);
    ~User_Index();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void changeMune();

    void bindBorrowItem();	

    void bindRecommend();
    //void on_tableView_clicked(const QModelIndex &index);

    void bindBookInfor();

    void on_btnEdiInfor_clicked();

    void on_pushButton_9_clicked();

    void on_chaPwd_2_clicked();

    void on_PersonDown_clicked();

    void on_PersonUp_clicked();

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_recommend_1_clicked();

    void on_recommend_2_clicked();

    void on_recommend_3_clicked();

    void on_recommend_4_clicked();

	void alert(string message);

//	void setStudent(Student& student);

    void on_chaPwd_clicked();

    void on_btnBorrow_clicked();

    void on_btnLike_clicked();

    void on_btnOrder_clicked();

    void on_search_down_clicked();

    void on_search_up_clicked();

    void on_search_botton_clicked();

private:
    Ui::User_Index *ui;
    QString normal_mune = "background:#fff;border:none;font-size:22px;";
    QString click_mune = "background:#002957;color:#fff;border:none;font-size:22px;";
    QString changeCoverFileName;
    QString dirpath = QDir::currentPath();
	//Student student;
};

#endif // USER_INDEX_H
