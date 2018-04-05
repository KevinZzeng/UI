/********************************************************************************
** Form generated from reading UI file 'managerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERWINDOW_H
#define UI_MANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managerWindow
{
public:
    QGroupBox *groupBox_navi;
    QToolButton *toolBtn_addmanager;
    QToolButton *toolBtn_exit;
    QPushButton *btn_check;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab_user;
    QGroupBox *grpBox_usersearch;
    QLabel *lbl_stuname;
    QLineEdit *lineEdit;
    QLabel *lbl_num;
    QLineEdit *lineEdit_2;
    QLabel *lbl_major;
    QComboBox *cmbBox_major;
    QPushButton *btn_usersearch;
    QTableView *tblView_userinfo;
    QPushButton *btn_deletechosen;
    QPushButton *btn_updatechoosen;
    QPushButton *btn_delete;
    QPushButton *btn_update;
    QWidget *tab_book;
    QGroupBox *grpBox_booksearch;
    QLabel *lbl_varies;
    QComboBox *cboBox_varies;
    QLabel *lbl_bookname;
    QLineEdit *lineEdit_bookname;
    QLabel *lbl_writer;
    QLineEdit *lineEdit_writer;
    QPushButton *btn_bookinfosearch;
    QTableView *tblView_bookinfo;
    QPushButton *btn_bookadd;
    QPushButton *btn_bookdelete;
    QPushButton *btn_updatechoosenbookinfo;
    QPushButton *btn_checkchoosenuserinfo;
    QWidget *tab_record;
    QListView *listView_record;
    QLabel *lbl_time;

    void setupUi(QWidget *managerWindow)
    {
        if (managerWindow->objectName().isEmpty())
            managerWindow->setObjectName(QStringLiteral("managerWindow"));
        managerWindow->resize(840, 924);
        groupBox_navi = new QGroupBox(managerWindow);
        groupBox_navi->setObjectName(QStringLiteral("groupBox_navi"));
        groupBox_navi->setGeometry(QRect(20, 150, 471, 80));
        toolBtn_addmanager = new QToolButton(groupBox_navi);
        toolBtn_addmanager->setObjectName(QStringLiteral("toolBtn_addmanager"));
        toolBtn_addmanager->setGeometry(QRect(180, 30, 121, 41));
        toolBtn_exit = new QToolButton(groupBox_navi);
        toolBtn_exit->setObjectName(QStringLiteral("toolBtn_exit"));
        toolBtn_exit->setGeometry(QRect(340, 30, 101, 41));
        btn_check = new QPushButton(groupBox_navi);
        btn_check->setObjectName(QStringLiteral("btn_check"));
        btn_check->setGeometry(QRect(40, 30, 101, 41));
        line = new QFrame(managerWindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 230, 821, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tabWidget = new QTabWidget(managerWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 250, 771, 661));
        tab_user = new QWidget();
        tab_user->setObjectName(QStringLiteral("tab_user"));
        grpBox_usersearch = new QGroupBox(tab_user);
        grpBox_usersearch->setObjectName(QStringLiteral("grpBox_usersearch"));
        grpBox_usersearch->setGeometry(QRect(20, 30, 711, 91));
        lbl_stuname = new QLabel(grpBox_usersearch);
        lbl_stuname->setObjectName(QStringLiteral("lbl_stuname"));
        lbl_stuname->setGeometry(QRect(10, 30, 72, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lbl_stuname->setFont(font);
        lineEdit = new QLineEdit(grpBox_usersearch);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 40, 81, 21));
        lbl_num = new QLabel(grpBox_usersearch);
        lbl_num->setObjectName(QStringLiteral("lbl_num"));
        lbl_num->setGeometry(QRect(160, 40, 72, 15));
        lbl_num->setFont(font);
        lineEdit_2 = new QLineEdit(grpBox_usersearch);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 40, 101, 21));
        lbl_major = new QLabel(grpBox_usersearch);
        lbl_major->setObjectName(QStringLiteral("lbl_major"));
        lbl_major->setGeometry(QRect(340, 40, 51, 16));
        lbl_major->setFont(font);
        cmbBox_major = new QComboBox(grpBox_usersearch);
        cmbBox_major->setObjectName(QStringLiteral("cmbBox_major"));
        cmbBox_major->setGeometry(QRect(390, 40, 201, 22));
        btn_usersearch = new QPushButton(grpBox_usersearch);
        btn_usersearch->setObjectName(QStringLiteral("btn_usersearch"));
        btn_usersearch->setGeometry(QRect(620, 20, 71, 51));
        btn_usersearch->setStyleSheet(QLatin1String("QPushButton{\n"
"color:green;\n"
"}"));
        tblView_userinfo = new QTableView(tab_user);
        tblView_userinfo->setObjectName(QStringLiteral("tblView_userinfo"));
        tblView_userinfo->setGeometry(QRect(30, 130, 611, 481));
        btn_deletechosen = new QPushButton(tab_user);
        btn_deletechosen->setObjectName(QStringLiteral("btn_deletechosen"));
        btn_deletechosen->setGeometry(QRect(660, 200, 93, 28));
        btn_updatechoosen = new QPushButton(tab_user);
        btn_updatechoosen->setObjectName(QStringLiteral("btn_updatechoosen"));
        btn_updatechoosen->setGeometry(QRect(660, 260, 93, 28));
        btn_delete = new QPushButton(tab_user);
        btn_delete->setObjectName(QStringLiteral("btn_delete"));
        btn_delete->setGeometry(QRect(660, 390, 93, 28));
        btn_update = new QPushButton(tab_user);
        btn_update->setObjectName(QStringLiteral("btn_update"));
        btn_update->setGeometry(QRect(660, 450, 93, 28));
        tabWidget->addTab(tab_user, QString());
        tab_book = new QWidget();
        tab_book->setObjectName(QStringLiteral("tab_book"));
        grpBox_booksearch = new QGroupBox(tab_book);
        grpBox_booksearch->setObjectName(QStringLiteral("grpBox_booksearch"));
        grpBox_booksearch->setGeometry(QRect(40, 30, 681, 91));
        lbl_varies = new QLabel(grpBox_booksearch);
        lbl_varies->setObjectName(QStringLiteral("lbl_varies"));
        lbl_varies->setGeometry(QRect(20, 40, 72, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Black"));
        font1.setBold(true);
        font1.setWeight(75);
        lbl_varies->setFont(font1);
        cboBox_varies = new QComboBox(grpBox_booksearch);
        cboBox_varies->setObjectName(QStringLiteral("cboBox_varies"));
        cboBox_varies->setGeometry(QRect(70, 40, 111, 22));
        lbl_bookname = new QLabel(grpBox_booksearch);
        lbl_bookname->setObjectName(QStringLiteral("lbl_bookname"));
        lbl_bookname->setGeometry(QRect(200, 40, 72, 15));
        lbl_bookname->setFont(font1);
        lineEdit_bookname = new QLineEdit(grpBox_booksearch);
        lineEdit_bookname->setObjectName(QStringLiteral("lineEdit_bookname"));
        lineEdit_bookname->setGeometry(QRect(250, 40, 113, 21));
        lbl_writer = new QLabel(grpBox_booksearch);
        lbl_writer->setObjectName(QStringLiteral("lbl_writer"));
        lbl_writer->setGeometry(QRect(380, 40, 72, 15));
        lbl_writer->setFont(font1);
        lineEdit_writer = new QLineEdit(grpBox_booksearch);
        lineEdit_writer->setObjectName(QStringLiteral("lineEdit_writer"));
        lineEdit_writer->setGeometry(QRect(432, 40, 121, 21));
        btn_bookinfosearch = new QPushButton(grpBox_booksearch);
        btn_bookinfosearch->setObjectName(QStringLiteral("btn_bookinfosearch"));
        btn_bookinfosearch->setGeometry(QRect(582, 20, 81, 51));
        tblView_bookinfo = new QTableView(tab_book);
        tblView_bookinfo->setObjectName(QStringLiteral("tblView_bookinfo"));
        tblView_bookinfo->setGeometry(QRect(40, 140, 571, 421));
        btn_bookadd = new QPushButton(tab_book);
        btn_bookadd->setObjectName(QStringLiteral("btn_bookadd"));
        btn_bookadd->setGeometry(QRect(630, 250, 93, 28));
        btn_bookdelete = new QPushButton(tab_book);
        btn_bookdelete->setObjectName(QStringLiteral("btn_bookdelete"));
        btn_bookdelete->setGeometry(QRect(630, 420, 93, 28));
        btn_updatechoosenbookinfo = new QPushButton(tab_book);
        btn_updatechoosenbookinfo->setObjectName(QStringLiteral("btn_updatechoosenbookinfo"));
        btn_updatechoosenbookinfo->setGeometry(QRect(90, 580, 161, 28));
        btn_checkchoosenuserinfo = new QPushButton(tab_book);
        btn_checkchoosenuserinfo->setObjectName(QStringLiteral("btn_checkchoosenuserinfo"));
        btn_checkchoosenuserinfo->setGeometry(QRect(360, 580, 171, 28));
        tabWidget->addTab(tab_book, QString());
        tab_record = new QWidget();
        tab_record->setObjectName(QStringLiteral("tab_record"));
        listView_record = new QListView(tab_record);
        listView_record->setObjectName(QStringLiteral("listView_record"));
        listView_record->setGeometry(QRect(60, 40, 631, 541));
        tabWidget->addTab(tab_record, QString());
        lbl_time = new QLabel(managerWindow);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));
        lbl_time->setGeometry(QRect(610, 220, 221, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial Black"));
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        lbl_time->setFont(font2);

        retranslateUi(managerWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(managerWindow);
    } // setupUi

    void retranslateUi(QWidget *managerWindow)
    {
        managerWindow->setWindowTitle(QApplication::translate("managerWindow", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237--\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        groupBox_navi->setTitle(QApplication::translate("managerWindow", "\345\212\237\350\203\275\346\240\217", Q_NULLPTR));
        toolBtn_addmanager->setText(QApplication::translate("managerWindow", "\346\267\273\345\212\240\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        toolBtn_exit->setText(QApplication::translate("managerWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        btn_check->setText(QApplication::translate("managerWindow", "\346\237\245\347\234\213\351\242\204\347\272\246\344\277\241\346\201\257", Q_NULLPTR));
        grpBox_usersearch->setTitle(QApplication::translate("managerWindow", "\346\220\234\347\264\242\347\224\250\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        lbl_stuname->setText(QApplication::translate("managerWindow", "\345\247\223\345\220\215:", Q_NULLPTR));
        lbl_num->setText(QApplication::translate("managerWindow", "\345\255\246\345\217\267:", Q_NULLPTR));
        lbl_major->setText(QApplication::translate("managerWindow", "\344\270\223\344\270\232:", Q_NULLPTR));
        cmbBox_major->clear();
        cmbBox_major->insertItems(0, QStringList()
         << QApplication::translate("managerWindow", "\346\265\267\346\264\213\347\247\221\345\255\246", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\345\244\247\346\260\224\347\247\221\345\255\246", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\347\224\265\345\255\220\344\277\241\346\201\257\345\267\245\347\250\213", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\347\211\251\347\220\206\345\255\246", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\347\224\265\345\255\220\344\277\241\346\201\257\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\351\200\232\344\277\241\345\267\245\347\250\213", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\350\256\241\347\256\227\346\234\272\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\344\277\235\345\257\206\347\256\241\347\220\206", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\346\265\267\346\264\213\346\212\200\346\234\257", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\345\214\226\345\255\246", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\345\214\226\345\255\246\345\267\245\347\250\213\344\270\216\345\267\245\350\211\272", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\345\234\260\350\264\250\345\255\246", Q_NULLPTR)
        );
        btn_usersearch->setText(QApplication::translate("managerWindow", "\346\243\200\347\264\242", Q_NULLPTR));
        btn_deletechosen->setText(QApplication::translate("managerWindow", "\345\210\240\351\231\244\351\200\211\344\270\255", Q_NULLPTR));
        btn_updatechoosen->setText(QApplication::translate("managerWindow", "\344\277\256\346\224\271\351\200\211\344\270\255", Q_NULLPTR));
        btn_delete->setText(QApplication::translate("managerWindow", "\346\211\271\351\207\217\345\210\240\351\231\244", Q_NULLPTR));
        btn_update->setText(QApplication::translate("managerWindow", "\346\211\271\351\207\217\344\277\256\346\224\271", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_user), QApplication::translate("managerWindow", "\347\224\250\346\210\267", Q_NULLPTR));
        grpBox_booksearch->setTitle(QApplication::translate("managerWindow", "\346\243\200\347\264\242\345\233\276\344\271\246\344\277\241\346\201\257", Q_NULLPTR));
        lbl_varies->setText(QApplication::translate("managerWindow", "\345\210\206\347\261\273:", Q_NULLPTR));
        cboBox_varies->clear();
        cboBox_varies->insertItems(0, QStringList()
         << QApplication::translate("managerWindow", "\345\205\250\351\203\250", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\346\226\207\345\255\246", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\347\220\206\347\247\221", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\345\267\245\347\247\221", Q_NULLPTR)
         << QApplication::translate("managerWindow", "\347\244\276\347\247\221", Q_NULLPTR)
        );
        lbl_bookname->setText(QApplication::translate("managerWindow", "\344\271\246\345\220\215:", Q_NULLPTR));
        lbl_writer->setText(QApplication::translate("managerWindow", "\344\275\234\350\200\205:", Q_NULLPTR));
        btn_bookinfosearch->setText(QApplication::translate("managerWindow", "\346\243\200\347\264\242", Q_NULLPTR));
        btn_bookadd->setText(QApplication::translate("managerWindow", "\346\211\271\351\207\217\345\242\236\345\212\240", Q_NULLPTR));
        btn_bookdelete->setText(QApplication::translate("managerWindow", "\346\211\271\351\207\217\345\210\240\351\231\244", Q_NULLPTR));
        btn_updatechoosenbookinfo->setText(QApplication::translate("managerWindow", "\344\277\256\346\224\271\351\200\211\344\270\255\344\271\246\347\261\215\344\277\241\346\201\257", Q_NULLPTR));
        btn_checkchoosenuserinfo->setText(QApplication::translate("managerWindow", "\346\237\245\347\234\213\351\200\211\344\270\255\345\200\237\351\230\205\347\224\250\346\210\267", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_book), QApplication::translate("managerWindow", "\345\233\276\344\271\246", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_record), QApplication::translate("managerWindow", "\346\223\215\344\275\234\350\256\260\345\275\225", Q_NULLPTR));
        lbl_time->setText(QApplication::translate("managerWindow", "initializing", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class managerWindow: public Ui_managerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERWINDOW_H
