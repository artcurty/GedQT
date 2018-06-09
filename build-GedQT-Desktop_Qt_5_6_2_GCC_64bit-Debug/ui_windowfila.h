/********************************************************************************
** Form generated from reading UI file 'windowfila.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWFILA_H
#define UI_WINDOWFILA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_windowfila
{
public:
    QPushButton *Peek;
    QLineEdit *valorEntrada;
    QPushButton *Dequeue;
    QPushButton *Enqueue;
    QLabel *tamanhofila;
    QLabel *pFila;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listfila;

    void setupUi(QDialog *windowfila)
    {
        if (windowfila->objectName().isEmpty())
            windowfila->setObjectName(QStringLiteral("windowfila"));
        windowfila->resize(469, 306);
        Peek = new QPushButton(windowfila);
        Peek->setObjectName(QStringLiteral("Peek"));
        Peek->setGeometry(QRect(60, 221, 80, 25));
        valorEntrada = new QLineEdit(windowfila);
        valorEntrada->setObjectName(QStringLiteral("valorEntrada"));
        valorEntrada->setGeometry(QRect(60, 128, 80, 25));
        Dequeue = new QPushButton(windowfila);
        Dequeue->setObjectName(QStringLiteral("Dequeue"));
        Dequeue->setGeometry(QRect(60, 190, 80, 25));
        Enqueue = new QPushButton(windowfila);
        Enqueue->setObjectName(QStringLiteral("Enqueue"));
        Enqueue->setGeometry(QRect(60, 159, 80, 25));
        tamanhofila = new QLabel(windowfila);
        tamanhofila->setObjectName(QStringLiteral("tamanhofila"));
        tamanhofila->setGeometry(QRect(320, 130, 41, 16));
        pFila = new QLabel(windowfila);
        pFila->setObjectName(QStringLiteral("pFila"));
        pFila->setGeometry(QRect(320, 160, 41, 16));
        label = new QLabel(windowfila);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 130, 111, 20));
        label_2 = new QLabel(windowfila);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 160, 111, 16));
        listfila = new QListWidget(windowfila);
        listfila->setObjectName(QStringLiteral("listfila"));
        listfila->setGeometry(QRect(60, 60, 361, 41));
        listfila->setLayoutDirection(Qt::LeftToRight);
        listfila->setFlow(QListView::LeftToRight);

        retranslateUi(windowfila);

        QMetaObject::connectSlotsByName(windowfila);
    } // setupUi

    void retranslateUi(QDialog *windowfila)
    {
        windowfila->setWindowTitle(QApplication::translate("windowfila", "Fila", 0));
        Peek->setText(QApplication::translate("windowfila", "Peek", 0));
        Dequeue->setText(QApplication::translate("windowfila", "Dequeue", 0));
        Enqueue->setText(QApplication::translate("windowfila", "Enqueue", 0));
        tamanhofila->setText(QApplication::translate("windowfila", "NULL", 0));
        pFila->setText(QApplication::translate("windowfila", "NULL", 0));
        label->setText(QApplication::translate("windowfila", "Tamanho da Fila:", 0));
        label_2->setText(QApplication::translate("windowfila", "Primeiro da Fila:", 0));
    } // retranslateUi

};

namespace Ui {
    class windowfila: public Ui_windowfila {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWFILA_H
