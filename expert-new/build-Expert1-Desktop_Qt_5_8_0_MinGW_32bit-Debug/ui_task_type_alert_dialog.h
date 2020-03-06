/********************************************************************************
** Form generated from reading UI file 'task_type_alert_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_TYPE_ALERT_DIALOG_H
#define UI_TASK_TYPE_ALERT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task_type_alert_dialog
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *task_type_alert_dialog)
    {
        if (task_type_alert_dialog->objectName().isEmpty())
            task_type_alert_dialog->setObjectName(QStringLiteral("task_type_alert_dialog"));
        task_type_alert_dialog->resize(400, 300);
        menuBar = new QMenuBar(task_type_alert_dialog);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        task_type_alert_dialog->setMenuBar(menuBar);
        mainToolBar = new QToolBar(task_type_alert_dialog);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        task_type_alert_dialog->addToolBar(mainToolBar);
        centralWidget = new QWidget(task_type_alert_dialog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        task_type_alert_dialog->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(task_type_alert_dialog);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        task_type_alert_dialog->setStatusBar(statusBar);

        retranslateUi(task_type_alert_dialog);

        QMetaObject::connectSlotsByName(task_type_alert_dialog);
    } // setupUi

    void retranslateUi(QMainWindow *task_type_alert_dialog)
    {
        task_type_alert_dialog->setWindowTitle(QApplication::translate("task_type_alert_dialog", "task_type_alert_dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class task_type_alert_dialog: public Ui_task_type_alert_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_TYPE_ALERT_DIALOG_H
