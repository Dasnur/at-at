/********************************************************************************
** Form generated from reading UI file 'dw_create_window.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DW_CREATE_WINDOW_H
#define UI_DW_CREATE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dw_create_window
{
public:

    void setupUi(QWidget *dw_create_window)
    {
        if (dw_create_window->objectName().isEmpty())
            dw_create_window->setObjectName(QString::fromUtf8("dw_create_window"));
        dw_create_window->resize(400, 300);

        retranslateUi(dw_create_window);

        QMetaObject::connectSlotsByName(dw_create_window);
    } // setupUi

    void retranslateUi(QWidget *dw_create_window)
    {
        dw_create_window->setWindowTitle(QCoreApplication::translate("dw_create_window", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dw_create_window: public Ui_dw_create_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DW_CREATE_WINDOW_H
