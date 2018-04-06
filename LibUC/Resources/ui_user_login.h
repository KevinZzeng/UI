/********************************************************************************
** Form generated from reading UI file 'user_login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_LOGIN_H
#define UI_USER_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_Login
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *User_Login)
    {
        if (User_Login->objectName().isEmpty())
            User_Login->setObjectName(QStringLiteral("User_Login"));
        User_Login->resize(378, 565);
        centralWidget = new QWidget(User_Login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 30, 311, 511));
        frame->setStyleSheet(QStringLiteral("background:#ffffff;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 30, 131, 51));
        label->setStyleSheet(QLatin1String("	font-size:45px;\n"
"	color:#65697f;\n"
"	text-align: center;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 100, 121, 41));
        label_2->setStyleSheet(QLatin1String("	font-size:24px;\n"
"	color:#65697f;\n"
"	text-align: center;"));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 160, 231, 51));
        textEdit->setStyleSheet(QLatin1String("border:1px solid #e1e0e0;\n"
"font-size:20px;\n"
""));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 230, 121, 41));
        label_3->setStyleSheet(QLatin1String("	font-size:24px;\n"
"	color:#65697f;\n"
"	text-align: center;"));
        textEdit_2 = new QTextEdit(frame);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(30, 280, 231, 51));
        textEdit_2->setStyleSheet(QLatin1String("border:1px solid #e1e0e0;\n"
"font-size:20px;\n"
""));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 380, 231, 51));
        pushButton->setStyleSheet(QLatin1String("	border:none;\n"
"	background-color:#002957;\n"
"	color: white;\n"
"	font-size:18px;\n"
"	font-weight:800;\n"
"	border-radius: 10px;;\n"
"	border-style: outset;"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 470, 121, 31));
        pushButton_2->setStyleSheet(QLatin1String("background:#fff;\n"
"color:#D6000F;\n"
"font-size:18px;\n"
"border:none;"));
        User_Login->setCentralWidget(centralWidget);

        retranslateUi(User_Login);

        QMetaObject::connectSlotsByName(User_Login);
    } // setupUi

    void retranslateUi(QMainWindow *User_Login)
    {
        User_Login->setWindowTitle(QApplication::translate("User_Login", "User_Login", Q_NULLPTR));
        label->setText(QApplication::translate("User_Login", "\347\231\273\351\231\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("User_Login", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("User_Login", "\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("User_Login", "\347\231\273\351\231\206", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("User_Login", "\347\256\241\347\220\206\345\221\230\347\231\273\351\231\206 >>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class User_Login: public Ui_User_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_LOGIN_H
