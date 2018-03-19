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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_login
{
public:
    QFrame *Container_1;
    QFrame *Container_2;
    QFrame *Container_3;
    QLabel *label_title;
    QLabel *label_name;
    QTextEdit *textEdit_name;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *User_login)
    {
        if (User_login->objectName().isEmpty())
            User_login->setObjectName(QStringLiteral("User_login"));
        User_login->resize(435, 642);
        Container_1 = new QFrame(User_login);
        Container_1->setObjectName(QStringLiteral("Container_1"));
        Container_1->setGeometry(QRect(0, 0, 451, 651));
        Container_1->setStyleSheet(QLatin1String("\n"
"backgroundv: qlineargradient(spread:pad, x1:0, y1:0, x2:100, y2:100, stop:0 #fc5f3a, stop:1 #ebc360)"));
        Container_1->setFrameShape(QFrame::StyledPanel);
        Container_1->setFrameShadow(QFrame::Raised);
        Container_2 = new QFrame(Container_1);
        Container_2->setObjectName(QStringLiteral("Container_2"));
        Container_2->setGeometry(QRect(0, 0, 451, 651));
        Container_2->setStyleSheet(QLatin1String("#Container_2{\n"
"	background : rgba(255,255,255,125);\n"
"}"));
        Container_2->setFrameShape(QFrame::StyledPanel);
        Container_2->setFrameShadow(QFrame::Raised);
        Container_3 = new QFrame(Container_2);
        Container_3->setObjectName(QStringLiteral("Container_3"));
        Container_3->setGeometry(QRect(30, 20, 371, 601));
        Container_3->setStyleSheet(QLatin1String("#Container_3{\n"
"	background:#ffffff;\n"
"}"));
        Container_3->setFrameShape(QFrame::StyledPanel);
        Container_3->setFrameShadow(QFrame::Raised);
        label_title = new QLabel(Container_3);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(130, -10, 201, 131));
        label_title->setStyleSheet(QLatin1String("#label_title{\n"
"	font-size:50px;\n"
"	color:#65697f;\n"
"	text-align: center;\n"
"}"));
        label_name = new QLabel(Container_3);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(40, 110, 131, 81));
        label_name->setStyleSheet(QLatin1String("\n"
"	font-size:24px;\n"
"	color:#65697f;\n"
"	text-align: center;\n"
""));
        textEdit_name = new QTextEdit(Container_3);
        textEdit_name->setObjectName(QStringLiteral("textEdit_name"));
        textEdit_name->setGeometry(QRect(40, 190, 261, 61));
        textEdit_name->setStyleSheet(QLatin1String("border:1px solid #e1e0e0;\n"
""));
        label = new QLabel(Container_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 270, 111, 61));
        label->setStyleSheet(QLatin1String("	font-size:24px;\n"
"	color:#65697f;\n"
"	text-align: center;"));
        textEdit = new QTextEdit(Container_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 330, 261, 61));
        textEdit->setStyleSheet(QLatin1String("   \n"
"	border:1px solid #e1e0e0;"));
        pushButton = new QPushButton(Container_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 450, 261, 61));
        pushButton->setStyleSheet(QLatin1String("	border:none;\n"
"	background-color:#002957;\n"
"	color: white;\n"
"	font-size:18px;\n"
"	font-weight:800;\n"
"	border-radius: 10px;;\n"
"	border-style: outset;"));

        retranslateUi(User_login);

        QMetaObject::connectSlotsByName(User_login);
    } // setupUi

    void retranslateUi(QWidget *User_login)
    {
        User_login->setWindowTitle(QApplication::translate("User_login", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Container_1->setToolTip(QApplication::translate("User_login", "<html>\n"
"<head/>\n"
"<body>\n"
"<p>123456\n"
"<br/>\n"
"</p>\n"
"</body>\n"
"</html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_title->setText(QApplication::translate("User_login", "\347\231\273\345\275\225", Q_NULLPTR));
        label_name->setText(QApplication::translate("User_login", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label->setText(QApplication::translate("User_login", "\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("User_login", "\347\231\273\351\231\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class User_login: public Ui_User_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_LOGIN_H
