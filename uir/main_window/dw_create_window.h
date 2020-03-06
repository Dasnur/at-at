#ifndef DW_CREATE_WINDOW_H
#define DW_CREATE_WINDOW_H

#include <QWidget>

namespace Ui {
class dw_create_window;
}

class dw_create_window : public QWidget
{
    Q_OBJECT

public:
    explicit dw_create_window(QWidget *parent =0);
    ~dw_create_window();

signals:
    void firstWindow();

private:
    Ui::dw_create_window *ui;
};

#endif // DW_CREATE_WINDOW_H
