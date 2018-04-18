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
    fila.cpp \
    windowfila.cpp \
    windowpilha.cpp \
    windowlista.cpp \
    lista.cpp \
    linkedlist.cpp \
    windowlinkedlist.cpp

HEADERS  += mainwindow.h \
    pilha.h \
    node.h \
    fila.h \
    windowfila.h \
    windowpilha.h \
    windowlista.h \
    lista.h \
    linkedlist.h \
    windowlinkedlist.h

FORMS    += \
    windowfila.ui \
    mainwindow.ui \
    windowpilha.ui \
    windowlista.ui \
    windowlinkedlist.ui
