#-------------------------------------------------
#
# Project created by QtCreator 2018-04-13T10:06:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GedQT
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pilha.cpp \
    fila.cpp

HEADERS  += mainwindow.h \
    pilha.h \
    node.h \
    fila.h

FORMS    += mainwindow.ui
