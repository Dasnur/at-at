#include "task_type_alert_dialog.h"
#include "ui_task_type_alert_dialog.h"

task_type_alert_dialog::task_type_alert_dialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::task_type_alert_dialog)
{
    ui->setupUi(this);
}

task_type_alert_dialog::~task_type_alert_dialog()
{
    delete ui;
}
