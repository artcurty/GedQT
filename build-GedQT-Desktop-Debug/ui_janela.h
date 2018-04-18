/********************************************************************************
** Form generated from reading UI file 'janela.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA_H
#define UI_JANELA_H

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
    QPushButton *OK;
    QLineEdit *entrada;
    QPushButton *pushButton;
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *Peek;
    QLabel *label_2;
    QLabel *resultadoTop;
    QLabel *tamanhoPilha;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionPilha = new QAction(MainWindow);
        actionPilha->setObjectName(QStringLiteral("actionPilha"));
        actionPilha_2 = new QAction(MainWindow);
        actionPilha_2->setObjectName(QStringLiteral("actionPilha_2"));
        actionFila = new QAction(MainWindow);
        actionFila->setObjectName(QStringLiteral("actionFila"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        OK = new QPushButton(centralWidget);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(70, 130, 71, 26));
        entrada = new QLineEdit(centralWidget);
        entrada->setObjectName(QStringLiteral("entrada"));
        entrada->setGeometry(QRect(70, 100, 71, 27));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 160, 71, 26));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 111, 16));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(230, 10, 71, 221));
        Peek = new QPushButton(centralWidget);
        Peek->setObjectName(QStringLiteral("Peek"));
        Peek->setGeometry(QRect(70, 190, 71, 26));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 60, 111, 16));
        resultadoTop = new QLabel(centralWidget);
        resultadoTop->setObjectName(QStringLiteral("resultadoTop"));
        resultadoTop->setGeometry(QRect(170, 60, 41, 16));
        tamanhoPilha = new QLabel(centralWidget);
        tamanhoPilha->setObjectName(QStringLiteral("tamanhoPilha"));
        tamanhoPilha->setGeometry(QRect(170, 30, 41, 16));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionPilha->setText(QApplication::translate("MainWindow", "Lista", 0));
        actionPilha_2->setText(QApplication::translate("MainWindow", "Pilha", 0));
        actionFila->setText(QApplication::translate("MainWindow", "Fila", 0));
        OK->setText(QApplication::translate("MainWindow", "Push", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Pop", 0));
        label->setText(QApplication::translate("MainWindow", "Tamanho da pilha:", 0));
        Peek->setText(QApplication::translate("MainWindow", "Peek", 0));
        label_2->setText(QApplication::translate("MainWindow", "Elemento do topo:", 0));
        resultadoTop->setText(QApplication::translate("MainWindow", "NULL", 0));
        tamanhoPilha->setText(QApplication::translate("MainWindow", "NULL", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA_H
