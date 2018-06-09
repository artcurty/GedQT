/********************************************************************************
** Form generated from reading UI file 'windowpilha.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWPILHA_H
#define UI_WINDOWPILHA_H

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

class Ui_windowpilha
{
public:
    QPushButton *pushButton;
    QPushButton *OK;
    QLabel *tamanhoPilha;
    QLabel *label;
    QListWidget *listWidget;
    QLabel *resultadoTop;
    QLabel *label_2;
    QLineEdit *entrada;
    QPushButton *Peek;

    void setupUi(QDialog *windowpilha)
    {
        if (windowpilha->objectName().isEmpty())
            windowpilha->setObjectName(QStringLiteral("windowpilha"));
        windowpilha->resize(400, 300);
        pushButton = new QPushButton(windowpilha);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 180, 71, 26));
        OK = new QPushButton(windowpilha);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(90, 150, 71, 26));
        tamanhoPilha = new QLabel(windowpilha);
        tamanhoPilha->setObjectName(QStringLiteral("tamanhoPilha"));
        tamanhoPilha->setGeometry(QRect(190, 50, 41, 16));
        label = new QLabel(windowpilha);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 50, 111, 16));
        listWidget = new QListWidget(windowpilha);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(250, 30, 71, 221));
        listWidget->setLayoutDirection(Qt::LeftToRight);
        listWidget->setStyleSheet(QStringLiteral(""));
        listWidget->setMovement(QListView::Static);
        listWidget->setFlow(QListView::TopToBottom);
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setLayoutMode(QListView::SinglePass);
        resultadoTop = new QLabel(windowpilha);
        resultadoTop->setObjectName(QStringLiteral("resultadoTop"));
        resultadoTop->setGeometry(QRect(190, 80, 41, 16));
        label_2 = new QLabel(windowpilha);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 80, 111, 16));
        entrada = new QLineEdit(windowpilha);
        entrada->setObjectName(QStringLiteral("entrada"));
        entrada->setGeometry(QRect(90, 120, 71, 27));
        Peek = new QPushButton(windowpilha);
        Peek->setObjectName(QStringLiteral("Peek"));
        Peek->setGeometry(QRect(90, 210, 71, 22));

        retranslateUi(windowpilha);

        QMetaObject::connectSlotsByName(windowpilha);
    } // setupUi

    void retranslateUi(QDialog *windowpilha)
    {
        windowpilha->setWindowTitle(QApplication::translate("windowpilha", "Pilha", 0));
        pushButton->setText(QApplication::translate("windowpilha", "Pop", 0));
        OK->setText(QApplication::translate("windowpilha", "Push", 0));
        tamanhoPilha->setText(QApplication::translate("windowpilha", "NULL", 0));
        label->setText(QApplication::translate("windowpilha", "Tamanho da pilha:", 0));
        resultadoTop->setText(QApplication::translate("windowpilha", "NULL", 0));
        label_2->setText(QApplication::translate("windowpilha", "Elemento do topo:", 0));
        Peek->setText(QApplication::translate("windowpilha", "Peek", 0));
    } // retranslateUi

};

namespace Ui {
    class windowpilha: public Ui_windowpilha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWPILHA_H
