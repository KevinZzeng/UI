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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managerWindow
{
public:

    void setupUi(QWidget *managerWindow)
    {
        if (managerWindow->objectName().isEmpty())
            managerWindow->setObjectName(QStringLiteral("managerWindow"));
        managerWindow->resize(823, 802);

        retranslateUi(managerWindow);

        QMetaObject::connectSlotsByName(managerWindow);
    } // setupUi

    void retranslateUi(QWidget *managerWindow)
    {
        managerWindow->setWindowTitle(QApplication::translate("managerWindow", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class managerWindow: public Ui_managerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERWINDOW_H
