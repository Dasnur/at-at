#ifndef TASK_TYPE_ALERT_DIALOG_H
#define TASK_TYPE_ALERT_DIALOG_H

#include <QMainWindow>

namespace Ui {
class task_type_alert_dialog;
}

class task_type_alert_dialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit task_type_alert_dialog(QWidget *parent = nullptr);
    ~task_type_alert_dialog();

private:
    Ui::task_type_alert_dialog *ui;
};

#endif // TASK_TYPE_ALERT_DIALOG_H
