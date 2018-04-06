/********************************************************************************
** Form generated from reading UI file 'user_index.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_INDEX_H
#define UI_USER_INDEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_Index
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QFrame *nav;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label;
    QFrame *person_index;
    QLabel *cover;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btnEdiInfor;
    QFrame *frame_2;
    QLabel *label_7;
    QPushButton *PersonUp;
    QPushButton *PersonDown;
    QTableView *tableView;
    QFrame *ediInfor;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *chaPwd;
    QLabel *cover_3;
    QPushButton *pushButton_9;
    QPushButton *chaPwd_2;
    QLineEdit *txtEdiPwd;
    QLineEdit *txtEdiPwdre;
    QFrame *book_manage;
    QLabel *label_11;
    QComboBox *cbxClass;
    QLabel *label_12;
    QComboBox *cbxClass_2;
    QLineEdit *search_box;
    QPushButton *search_botton;
    QLabel *label_13;
    QPushButton *recommend_1;
    QPushButton *recommend_2;
    QPushButton *recommend_3;
    QPushButton *recommend_4;
    QFrame *search;
    QTableView *search_result;
    QPushButton *search_up;
    QPushButton *search_down;
    QFrame *bookInformation;
    QLabel *bookCover;
    QLabel *bookTitle;
    QLabel *bookAuthor;
    QLabel *bookPublish;
    QLabel *bookClass;
    QPushButton *btnBorrow;
    QPushButton *btnLike;
    QPushButton *btnOrder;
    QLabel *bookContent;

    void setupUi(QMainWindow *User_Index)
    {
        if (User_Index->objectName().isEmpty())
            User_Index->setObjectName(QStringLiteral("User_Index"));
        User_Index->resize(1270, 689);
        centralwidget = new QWidget(User_Index);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1271, 701));
        frame->setStyleSheet(QStringLiteral("background:#f2f2f2;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        nav = new QFrame(frame);
        nav->setObjectName(QStringLiteral("nav"));
        nav->setGeometry(QRect(-10, -10, 301, 751));
        nav->setStyleSheet(QStringLiteral("background:#fff;"));
        nav->setFrameShape(QFrame::StyledPanel);
        nav->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(nav);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 230, 291, 71));
        pushButton->setStyleSheet(QLatin1String("\n"
"background:#002957;\n"
"color:#fff;\n"
"border:none;\n"
"font-size:22px;"));
        pushButton_2 = new QPushButton(nav);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 310, 291, 61));
        pushButton_2->setStyleSheet(QLatin1String("background:#fff;\n"
"border:none;\n"
"font-size:22px;\n"
""));
        pushButton_3 = new QPushButton(nav);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 370, 291, 61));
        pushButton_3->setStyleSheet(QLatin1String("background:#fff;\n"
"border:none;\n"
"font-size:22px;\n"
""));
        pushButton_4 = new QPushButton(nav);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 430, 291, 71));
        pushButton_4->setStyleSheet(QLatin1String("background:#fff;\n"
"border:none;\n"
"font-size:22px;\n"
""));
        pushButton_5 = new QPushButton(nav);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 510, 291, 61));
        pushButton_5->setStyleSheet(QLatin1String("background:#fff;\n"
"border:none;\n"
"font-size:22px;\n"
""));
        pushButton_6 = new QPushButton(nav);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 570, 291, 71));
        pushButton_6->setStyleSheet(QLatin1String("background:#fff;\n"
"border:none;\n"
"font-size:22px;\n"
""));
        pushButton_7 = new QPushButton(nav);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 630, 291, 61));
        pushButton_7->setStyleSheet(QLatin1String("background:#fff;\n"
"border:none;\n"
"font-size:22px;\n"
""));
        label = new QLabel(nav);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 271, 221));
        label->setStyleSheet(QStringLiteral("image:url(:/new/images/images/lib.png);"));
        pushButton_7->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        label->raise();
        person_index = new QFrame(frame);
        person_index->setObjectName(QStringLiteral("person_index"));
        person_index->setGeometry(QRect(320, 20, 951, 661));
        person_index->setFrameShape(QFrame::StyledPanel);
        person_index->setFrameShadow(QFrame::Raised);
        cover = new QLabel(person_index);
        cover->setObjectName(QStringLiteral("cover"));
        cover->setGeometry(QRect(30, 30, 221, 231));
        cover->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(person_index);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 30, 271, 51));
        label_2->setStyleSheet(QStringLiteral("font-size:28px;"));
        label_3 = new QLabel(person_index);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 120, 211, 41));
        label_3->setStyleSheet(QStringLiteral("font-size:22px;"));
        label_4 = new QLabel(person_index);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 210, 161, 31));
        label_4->setStyleSheet(QStringLiteral("font-size:20px;"));
        label_5 = new QLabel(person_index);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(510, 210, 161, 31));
        label_5->setStyleSheet(QStringLiteral("font-size:20px;"));
        label_6 = new QLabel(person_index);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(710, 210, 171, 31));
        label_6->setStyleSheet(QStringLiteral("font-size:20px;"));
        btnEdiInfor = new QPushButton(person_index);
        btnEdiInfor->setObjectName(QStringLiteral("btnEdiInfor"));
        btnEdiInfor->setGeometry(QRect(610, 130, 191, 21));
        btnEdiInfor->setStyleSheet(QLatin1String("border:none;\n"
"color:#D6000F;\n"
"font-size:22px;\n"
"display:none;"));
        frame_2 = new QFrame(person_index);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 280, 961, 411));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 10, 191, 81));
        label_7->setStyleSheet(QStringLiteral("font-size:22px;"));
        PersonUp = new QPushButton(frame_2);
        PersonUp->setObjectName(QStringLiteral("PersonUp"));
        PersonUp->setGeometry(QRect(180, 330, 161, 31));
        PersonUp->setStyleSheet(QLatin1String("color:#fff;\n"
"background-color: #002957;\n"
"border:none;\n"
"font-size:18px;\n"
"border-radius: 10px;"));
        PersonDown = new QPushButton(frame_2);
        PersonDown->setObjectName(QStringLiteral("PersonDown"));
        PersonDown->setGeometry(QRect(490, 330, 161, 31));
        PersonDown->setStyleSheet(QLatin1String("color:#fff;\n"
"background-color: #002957;\n"
"border:none;\n"
"font-size:18px;\n"
"border-radius: 10px;"));
        tableView = new QTableView(frame_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(90, 90, 731, 221));
        tableView->setStyleSheet(QLatin1String("border:none;\n"
"font-size:16px;\n"
"background:#fff;"));
        ediInfor = new QFrame(frame_2);
        ediInfor->setObjectName(QStringLiteral("ediInfor"));
        ediInfor->setGeometry(QRect(10, 0, 931, 371));
        ediInfor->setFrameShape(QFrame::StyledPanel);
        ediInfor->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(ediInfor);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 20, 181, 61));
        label_8->setStyleSheet(QLatin1String("font-size:22px;\n"
""));
        label_9 = new QLabel(ediInfor);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 90, 101, 41));
        label_9->setStyleSheet(QLatin1String("font-size:18px;\n"
""));
        label_10 = new QLabel(ediInfor);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 190, 101, 41));
        label_10->setStyleSheet(QLatin1String("font-size:18px;\n"
""));
        chaPwd = new QPushButton(ediInfor);
        chaPwd->setObjectName(QStringLiteral("chaPwd"));
        chaPwd->setGeometry(QRect(40, 300, 291, 41));
        chaPwd->setStyleSheet(QLatin1String("color:#fff;\n"
"background-color: #002957;\n"
"border:none;\n"
"font-size:18px;"));
        cover_3 = new QLabel(ediInfor);
        cover_3->setObjectName(QStringLiteral("cover_3"));
        cover_3->setGeometry(QRect(550, 30, 221, 231));
        cover_3->setStyleSheet(QStringLiteral("image: url(:/new/images/images/pic.jpeg);"));
        pushButton_9 = new QPushButton(ediInfor);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(550, 200, 221, 51));
        pushButton_9->setStyleSheet(QLatin1String("color:#fff;\n"
"background-color: rgba(0, 41, 87, 125);\n"
"border:none;\n"
"font-size:22px;"));
        chaPwd_2 = new QPushButton(ediInfor);
        chaPwd_2->setObjectName(QStringLiteral("chaPwd_2"));
        chaPwd_2->setGeometry(QRect(550, 290, 231, 41));
        chaPwd_2->setStyleSheet(QLatin1String("color:#fff;\n"
"background-color: #002957;\n"
"border:none;\n"
"font-size:18px;"));
        txtEdiPwd = new QLineEdit(ediInfor);
        txtEdiPwd->setObjectName(QStringLiteral("txtEdiPwd"));
        txtEdiPwd->setGeometry(QRect(40, 140, 291, 41));
        txtEdiPwdre = new QLineEdit(ediInfor);
        txtEdiPwdre->setObjectName(QStringLiteral("txtEdiPwdre"));
        txtEdiPwdre->setGeometry(QRect(40, 230, 291, 41));
        label_10->raise();
        label_8->raise();
        label_9->raise();
        chaPwd->raise();
        cover_3->raise();
        pushButton_9->raise();
        chaPwd_2->raise();
        txtEdiPwd->raise();
        txtEdiPwdre->raise();
        book_manage = new QFrame(frame);
        book_manage->setObjectName(QStringLiteral("book_manage"));
        book_manage->setGeometry(QRect(310, 20, 951, 651));
        book_manage->setFrameShape(QFrame::StyledPanel);
        book_manage->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(book_manage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(340, 40, 301, 71));
        label_11->setStyleSheet(QLatin1String("font-size:38px;\n"
"color:#D6000F;"));
        cbxClass = new QComboBox(book_manage);
        cbxClass->setObjectName(QStringLiteral("cbxClass"));
        cbxClass->setGeometry(QRect(190, 150, 121, 31));
        cbxClass->setStyleSheet(QLatin1String("background-color: #fff;\n"
"border:none;\n"
"font-size:18px;"));
        label_12 = new QLabel(book_manage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(90, 140, 81, 41));
        label_12->setStyleSheet(QStringLiteral("font-size:18px;"));
        cbxClass_2 = new QComboBox(book_manage);
        cbxClass_2->setObjectName(QStringLiteral("cbxClass_2"));
        cbxClass_2->setGeometry(QRect(80, 220, 121, 41));
        cbxClass_2->setStyleSheet(QLatin1String("background-color: #fff;\n"
"border:none;\n"
"font-size:18px;"));
        search_box = new QLineEdit(book_manage);
        search_box->setObjectName(QStringLiteral("search_box"));
        search_box->setGeometry(QRect(200, 220, 541, 41));
        search_box->setStyleSheet(QLatin1String("font-size:18px;\n"
"background-color:#fff;\n"
"border:none;\n"
""));
        search_botton = new QPushButton(book_manage);
        search_botton->setObjectName(QStringLiteral("search_botton"));
        search_botton->setGeometry(QRect(740, 220, 141, 41));
        search_botton->setStyleSheet(QLatin1String("font-size:18px;\n"
"color:#fff;\n"
"border:none;\n"
"background-color: #002957;"));
        label_13 = new QLabel(book_manage);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(40, 300, 211, 71));
        label_13->setStyleSheet(QStringLiteral("font-size:28px;"));
        recommend_1 = new QPushButton(book_manage);
        recommend_1->setObjectName(QStringLiteral("recommend_1"));
        recommend_1->setGeometry(QRect(60, 390, 161, 241));
        recommend_1->setStyleSheet(QStringLiteral("border-image:url(C:/Users/www/Desktop/Lib/images/lib.png);"));
        recommend_2 = new QPushButton(book_manage);
        recommend_2->setObjectName(QStringLiteral("recommend_2"));
        recommend_2->setGeometry(QRect(290, 390, 161, 241));
        recommend_3 = new QPushButton(book_manage);
        recommend_3->setObjectName(QStringLiteral("recommend_3"));
        recommend_3->setGeometry(QRect(500, 390, 161, 241));
        recommend_4 = new QPushButton(book_manage);
        recommend_4->setObjectName(QStringLiteral("recommend_4"));
        recommend_4->setGeometry(QRect(730, 390, 161, 241));
        search = new QFrame(book_manage);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(20, 310, 911, 341));
        search->setFrameShape(QFrame::StyledPanel);
        search->setFrameShadow(QFrame::Raised);
        search_result = new QTableView(search);
        search_result->setObjectName(QStringLiteral("search_result"));
        search_result->setGeometry(QRect(20, 20, 831, 251));
        search_up = new QPushButton(search);
        search_up->setObjectName(QStringLiteral("search_up"));
        search_up->setGeometry(QRect(100, 290, 161, 41));
        search_up->setStyleSheet(QLatin1String("border:none;\n"
"background:#002957;\n"
"color:#fff;\n"
"font-size:18px;\n"
"border-radius: 10px;"));
        search_down = new QPushButton(search);
        search_down->setObjectName(QStringLiteral("search_down"));
        search_down->setGeometry(QRect(510, 290, 161, 41));
        search_down->setStyleSheet(QLatin1String("border:none;\n"
"background:#002957;\n"
"color:#fff;\n"
"font-size:18px;\n"
"border-radius: 10px;"));
        bookInformation = new QFrame(book_manage);
        bookInformation->setObjectName(QStringLiteral("bookInformation"));
        bookInformation->setGeometry(QRect(20, 10, 921, 641));
        bookInformation->setFrameShape(QFrame::StyledPanel);
        bookInformation->setFrameShadow(QFrame::Raised);
        bookCover = new QLabel(bookInformation);
        bookCover->setObjectName(QStringLiteral("bookCover"));
        bookCover->setGeometry(QRect(70, 40, 171, 271));
        bookTitle = new QLabel(bookInformation);
        bookTitle->setObjectName(QStringLiteral("bookTitle"));
        bookTitle->setGeometry(QRect(350, 40, 191, 51));
        bookTitle->setStyleSheet(QStringLiteral("font-size:18px;"));
        bookAuthor = new QLabel(bookInformation);
        bookAuthor->setObjectName(QStringLiteral("bookAuthor"));
        bookAuthor->setGeometry(QRect(350, 120, 191, 51));
        bookAuthor->setStyleSheet(QStringLiteral("font-size:18px;"));
        bookPublish = new QLabel(bookInformation);
        bookPublish->setObjectName(QStringLiteral("bookPublish"));
        bookPublish->setGeometry(QRect(350, 200, 191, 51));
        bookPublish->setStyleSheet(QStringLiteral("font-size:18px;"));
        bookClass = new QLabel(bookInformation);
        bookClass->setObjectName(QStringLiteral("bookClass"));
        bookClass->setGeometry(QRect(350, 270, 191, 51));
        bookClass->setStyleSheet(QStringLiteral("font-size:18px;"));
        btnBorrow = new QPushButton(bookInformation);
        btnBorrow->setObjectName(QStringLiteral("btnBorrow"));
        btnBorrow->setGeometry(QRect(680, 40, 161, 41));
        btnBorrow->setStyleSheet(QLatin1String("font-size:18px;\n"
"background:#002957;\n"
"color:#fff;\n"
"border:none;\n"
"border-radius: 10px;"));
        btnLike = new QPushButton(bookInformation);
        btnLike->setObjectName(QStringLiteral("btnLike"));
        btnLike->setGeometry(QRect(680, 150, 161, 41));
        btnLike->setStyleSheet(QLatin1String("font-size:18px;\n"
"background:#002957;\n"
"color:#fff;\n"
"border:none;\n"
"border-radius: 10px;"));
        btnOrder = new QPushButton(bookInformation);
        btnOrder->setObjectName(QStringLiteral("btnOrder"));
        btnOrder->setGeometry(QRect(680, 250, 161, 41));
        btnOrder->setStyleSheet(QLatin1String("font-size:18px;\n"
"background:#002957;\n"
"color:#fff;\n"
"border:none;\n"
"border-radius: 10px;"));
        bookContent = new QLabel(bookInformation);
        bookContent->setObjectName(QStringLiteral("bookContent"));
        bookContent->setGeometry(QRect(70, 370, 801, 221));
        bookContent->setStyleSheet(QStringLiteral("font-size:18px;"));
        User_Index->setCentralWidget(centralwidget);

        retranslateUi(User_Index);

        QMetaObject::connectSlotsByName(User_Index);
    } // setupUi

    void retranslateUi(QMainWindow *User_Index)
    {
        User_Index->setWindowTitle(QApplication::translate("User_Index", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("User_Index", "\344\270\252\344\272\272\344\270\255\345\277\203", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("User_Index", "\345\233\276\344\271\246\347\256\241\347\220\206", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("User_Index", "\351\242\204\347\272\246\350\256\260\345\275\225", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("User_Index", "\345\200\237\351\230\205\345\216\206\345\217\262", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("User_Index", "\346\224\266\350\227\217\344\271\246\347\233\256", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("User_Index", "\346\266\210\346\201\257\346\217\220\347\244\272", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("User_Index", "\351\200\200\345\207\272\347\231\273\351\231\206", Q_NULLPTR));
        label->setText(QString());
        cover->setText(QString());
        label_2->setText(QApplication::translate("User_Index", "16020031021,\345\256\230\346\254\243\344\273\252", Q_NULLPTR));
        label_3->setText(QApplication::translate("User_Index", "\350\256\241\347\256\227\346\234\272\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257", Q_NULLPTR));
        label_4->setText(QApplication::translate("User_Index", "\346\254\240\350\264\271\351\207\221\351\242\235: 0.00\345\205\203", Q_NULLPTR));
        label_5->setText(QApplication::translate("User_Index", "\345\275\223\345\211\215\345\200\237\351\230\205: 2 \346\234\254", Q_NULLPTR));
        label_6->setText(QApplication::translate("User_Index", "\346\234\200\345\244\247\345\200\237\351\230\205: 12 \346\234\254", Q_NULLPTR));
        btnEdiInfor->setText(QApplication::translate("User_Index", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257 >>", Q_NULLPTR));
        label_7->setText(QApplication::translate("User_Index", "\345\200\237\351\230\205\344\277\241\346\201\257 >>", Q_NULLPTR));
        PersonUp->setText(QApplication::translate("User_Index", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        PersonDown->setText(QApplication::translate("User_Index", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
        label_8->setText(QApplication::translate("User_Index", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257  >>", Q_NULLPTR));
        label_9->setText(QApplication::translate("User_Index", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_10->setText(QApplication::translate("User_Index", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        chaPwd->setText(QApplication::translate("User_Index", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        cover_3->setText(QString());
        pushButton_9->setText(QApplication::translate("User_Index", "\346\233\264\346\215\242\345\244\264\345\203\217", Q_NULLPTR));
        chaPwd_2->setText(QApplication::translate("User_Index", "\347\241\256\350\256\244\346\233\264\346\215\242", Q_NULLPTR));
        label_11->setText(QApplication::translate("User_Index", "\345\233\276  \344\271\246  \346\220\234  \347\264\242", Q_NULLPTR));
        label_12->setText(QApplication::translate("User_Index", "\345\210\206  \347\261\273", Q_NULLPTR));
        cbxClass_2->clear();
        cbxClass_2->insertItems(0, QStringList()
         << QApplication::translate("User_Index", "\346\214\211\344\271\246\345\220\215", Q_NULLPTR)
         << QApplication::translate("User_Index", "\346\214\211\344\275\234\350\200\205", Q_NULLPTR)
        );
        search_botton->setText(QApplication::translate("User_Index", "\346\220\234  \347\264\242", Q_NULLPTR));
        label_13->setText(QApplication::translate("User_Index", "\344\270\252\344\272\272\346\216\250\350\215\220 >>", Q_NULLPTR));
        recommend_1->setText(QString());
        recommend_2->setText(QApplication::translate("User_Index", "PushButton", Q_NULLPTR));
        recommend_3->setText(QApplication::translate("User_Index", "PushButton", Q_NULLPTR));
        recommend_4->setText(QApplication::translate("User_Index", "PushButton", Q_NULLPTR));
        search_up->setText(QApplication::translate("User_Index", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        search_down->setText(QApplication::translate("User_Index", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
        bookCover->setText(QString());
        bookTitle->setText(QApplication::translate("User_Index", "\344\271\246\345\220\215", Q_NULLPTR));
        bookAuthor->setText(QApplication::translate("User_Index", "\344\275\234\350\200\205", Q_NULLPTR));
        bookPublish->setText(QApplication::translate("User_Index", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        bookClass->setText(QApplication::translate("User_Index", "\345\210\206\347\261\273", Q_NULLPTR));
        btnBorrow->setText(QApplication::translate("User_Index", "\345\200\237\351\230\205", Q_NULLPTR));
        btnLike->setText(QApplication::translate("User_Index", "\346\224\266\350\227\217", Q_NULLPTR));
        btnOrder->setText(QApplication::translate("User_Index", "\351\242\204\347\272\246", Q_NULLPTR));
        bookContent->setText(QApplication::translate("User_Index", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class User_Index: public Ui_User_Index {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_INDEX_H
