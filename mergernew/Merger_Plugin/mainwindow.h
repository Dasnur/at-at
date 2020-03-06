#ifndef MERGER_MAINWINDOW_H
#define MERGER_MAINWINDOW_H

#include <QMainWindow>
#include "merger_t.h"
#include <string>

namespace Ui {
  class MergerWindow;
}

class MergerWindow : public QWidget
{
  Q_OBJECT

  public:
    explicit MergerWindow(QWidget *parent = 0);
    ~MergerWindow();

  private slots:
    void on_load_button_clicked();

    void on_fill_button_clicked();

    void on_merge_types_button_clicked();

    void on_save_button_clicked();

    void on_merge_objects_button_clicked();

    void on_merge_events_button_clicked();

    void on_merge_intervals_button_clicked();

    void on_merge_rules_button_clicked();

    void on_show_rtr_button_clicked();

    void on_show_dists_button_clicked();

  private:
    Ui::MergerWindow* ui;
    merger_t* merger = nullptr;
    string log = "";
    knowledge_field_t left_kf;
    knowledge_field_t right_kf;
};

#endif
