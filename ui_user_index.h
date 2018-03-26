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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QPushButton *pushButton_8;
    QFrame *frame_2;
    QTableView *tableView;
    QLabel *label_7;

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
        label->setStyleSheet(QStringLiteral("border-image: url(:/new/images/images/123.png);"));
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
        person_index->setGeometry(QRect(310, 0, 961, 291));
        person_index->setFrameShape(QFrame::StyledPanel);
        person_index->setFrameShadow(QFrame::Raised);
        cover = new QLabel(person_index);
        cover->setObjectName(QStringLiteral("cover"));
        cover->setGeometry(QRect(30, 30, 221, 231));
        cover->setStyleSheet(QStringLiteral("image: url(:/new/images/images/20150129085241_ASwjx.thumb.700_0.jpeg);"));
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
        pushButton_8 = new QPushButton(person_index);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(610, 130, 191, 21));
        pushButton_8->setStyleSheet(QLatin1String("border:none;\n"
"color:#D6000F;\n"
"font-size:22px;\n"
"display:none;"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(310, 290, 961, 411));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(frame_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(70, 80, 801, 251));
        tableView->setStyleSheet(QLatin1String("border:none;\n"
"font-size:16px;"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 20, 211, 41));
        label_7->setStyleSheet(QStringLiteral("font-size:22px;"));
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
        pushButton_8->setText(QApplication::translate("User_Index", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257 >>", Q_NULLPTR));
        label_7->setText(QApplication::translate("User_Index", "\345\200\237\351\230\205\344\277\241\346\201\257 >>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class User_Index: public Ui_User_Index {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_INDEX_H
