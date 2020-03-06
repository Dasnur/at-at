#include "dw_create_window.h"
#include "ui_dw_create_window.h"

dw_create_window::dw_create_window(QWidget *parent) :
    QWidget (parent),
    ui(new Ui::dw_create_window)
{
    ui->setupUi(this);
}

dw_create_window::~dw_create_window()
{
    delete ui;
}
