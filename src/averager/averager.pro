#-------------------------------------------------
#
# Project created by QtCreator 2017-10-14T12:03:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = averager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Calendario.cpp \
    MyException.cpp \
    Suceso.cpp

HEADERS  += mainwindow.h \
    Suceso.h \
    Calendario.h

FORMS    += mainwindow.ui

CONFIG += c++11
