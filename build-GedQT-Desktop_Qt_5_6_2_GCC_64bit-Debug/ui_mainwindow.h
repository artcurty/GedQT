/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPilha;
    QAction *actionPilha_2;
    QAction *actionFila;
    QWidget *centralWidget;
    QPushButton *fila;
    QLabel *label;
    QPushButton *lista;
    QPushButton *pilha;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *fila_2;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(452, 345);
        actionPilha = new QAction(MainWindow);
        actionPilha->setObjectName(QStringLiteral("actionPilha"));
        actionPilha_2 = new QAction(MainWindow);
        actionPilha_2->setObjectName(QStringLiteral("actionPilha_2"));
        actionFila = new QAction(MainWindow);
        actionFila->setObjectName(QStringLiteral("actionFila"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        fila = new QPushButton(centralWidget);
        fila->setObjectName(QStringLiteral("fila"));
        fila->setGeometry(QRect(80, 210, 141, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 30, 91, 16));
        lista = new QPushButton(centralWidget);
        lista->setObjectName(QStringLiteral("lista"));
        lista->setGeometry(QRect(160, 120, 141, 61));
        pilha = new QPushButton(centralWidget);
        pilha->setObjectName(QStringLiteral("pilha"));
        pilha->setGeometry(QRect(310, 120, 131, 61));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 70, 181, 16));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 120, 131, 61));
        fila_2 = new QPushButton(centralWidget);
        fila_2->setObjectName(QStringLiteral("fila_2"));
        fila_2->setGeometry(QRect(240, 210, 141, 61));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Menu", 0));
        actionPilha->setText(QApplication::translate("MainWindow", "Lista", 0));
        actionPilha_2->setText(QApplication::translate("MainWindow", "Pilha", 0));
        actionFila->setText(QApplication::translate("MainWindow", "Fila", 0));
        fila->setText(QApplication::translate("MainWindow", "Fila", 0));
        label->setText(QApplication::translate("MainWindow", "BEM VINDO ", 0));
        lista->setText(QApplication::translate("MainWindow", "Lista Duplamente", 0));
        pilha->setText(QApplication::translate("MainWindow", "Pilha", 0));
        label_2->setText(QApplication::translate("MainWindow", "Selecione a ED desejada:", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Lista Simples", 0));
        fila_2->setText(QApplication::translate("MainWindow", "Arvore Binaria", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
