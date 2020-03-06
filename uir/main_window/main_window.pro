#-------------------------------------------------
#
# Project created by QtCreator 2018-05-09T20:19:06
#
#-------------------------------------------------

QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = main_window
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += mainwindow.cpp \
    main.cpp \
    tree_t.cpp \
    tree_node_t.cpp \
    model_t.cpp \
    database_wrapper.cpp \
    knowledge_field_t.cpp \
    dw_create_window.cpp

HEADERS  += mainwindow.h \
    model_t.h \
    database_wrapper.h \
    tree_t.h \
    tree_node_t.h \
    knowledge_field_t.h \
    dw_create_window.h

FORMS    += mainwindow.ui \
    dw_create_window.ui
