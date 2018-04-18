/********************************************************************************
** Form generated from reading UI file 'index.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_H
#define UI_INDEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_index
{
public:
    QWidget *centralwidget;
    QLabel *tamanhoPilha;
    QLabel *resultadoTop;
    QListWidget *listWidget;
    QPushButton *Peek;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *OK;
    QLineEdit *entrada;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *index)
    {
        if (index->objectName().isEmpty())
            index->setObjectName(QStringLiteral("index"));
        index->resize(400, 300);
        centralwidget = new QWidget(index);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tamanhoPilha = new QLabel(centralwidget);
        tamanhoPilha->setObjectName(QStringLiteral("tamanhoPilha"));
        tamanhoPilha->setGeometry(QRect(190, 40, 41, 16));
        resultadoTop = new QLabel(centralwidget);
        resultadoTop->setObjectName(QStringLiteral("resultadoTop"));
        resultadoTop->setGeometry(QRect(190, 70, 41, 16));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(250, 20, 71, 221));
        Peek = new QPushButton(centralwidget);
        Peek->setObjectName(QStringLiteral("Peek"));
        Peek->setGeometry(QRect(90, 200, 71, 26));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 170, 71, 26));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 40, 111, 16));
        OK = new QPushButton(centralwidget);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(90, 140, 71, 26));
        entrada = new QLineEdit(centralwidget);
        entrada->setObjectName(QStringLiteral("entrada"));
        entrada->setGeometry(QRect(90, 110, 71, 27));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 70, 111, 16));
        index->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(index);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        index->setStatusBar(statusbar);

        retranslateUi(index);

        QMetaObject::connectSlotsByName(index);
    } // setupUi

    void retranslateUi(QMainWindow *index)
    {
        index->setWindowTitle(QApplication::translate("index", "MainWindow", 0));
        tamanhoPilha->setText(QApplication::translate("index", "NULL", 0));
        resultadoTop->setText(QApplication::translate("index", "NULL", 0));
        Peek->setText(QApplication::translate("index", "Peek", 0));
        pushButton->setText(QApplication::translate("index", "Pop", 0));
        label->setText(QApplication::translate("index", "Tamanho da pilha:", 0));
        OK->setText(QApplication::translate("index", "Push", 0));
        label_2->setText(QApplication::translate("index", "Elemento do topo:", 0));
    } // retranslateUi

};

namespace Ui {
    class index: public Ui_index {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_H
