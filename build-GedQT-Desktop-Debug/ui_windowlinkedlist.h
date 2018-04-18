/********************************************************************************
** Form generated from reading UI file 'windowlinkedlist.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWLINKEDLIST_H
#define UI_WINDOWLINKEDLIST_H

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

class Ui_windowLinkedList
{
public:
    QLabel *label_3;
    QLineEdit *entrada;
    QLabel *label_4;
    QPushButton *search;
    QPushButton *removeAfter;
    QLineEdit *positionRemove;
    QLabel *retTamanho;
    QLabel *label_2;
    QPushButton *InsertFront;
    QPushButton *removeN;
    QLineEdit *positionInsert;
    QListWidget *listWidget;
    QPushButton *insertAfter;
    QPushButton *insertN;
    QPushButton *removeFront;
    QLabel *label;

    void setupUi(QDialog *windowLinkedList)
    {
        if (windowLinkedList->objectName().isEmpty())
            windowLinkedList->setObjectName(QStringLiteral("windowLinkedList"));
        windowLinkedList->resize(400, 300);
        label_3 = new QLabel(windowLinkedList);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 130, 101, 41));
        entrada = new QLineEdit(windowLinkedList);
        entrada->setObjectName(QStringLiteral("entrada"));
        entrada->setGeometry(QRect(149, 140, 41, 22));
        label_4 = new QLabel(windowLinkedList);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(290, 170, 59, 21));
        search = new QPushButton(windowLinkedList);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(39, 170, 151, 22));
        removeAfter = new QPushButton(windowLinkedList);
        removeAfter->setObjectName(QStringLiteral("removeAfter"));
        removeAfter->setGeometry(QRect(220, 202, 151, 22));
        positionRemove = new QLineEdit(windowLinkedList);
        positionRemove->setObjectName(QStringLiteral("positionRemove"));
        positionRemove->setGeometry(QRect(340, 170, 31, 22));
        retTamanho = new QLabel(windowLinkedList);
        retTamanho->setObjectName(QStringLiteral("retTamanho"));
        retTamanho->setGeometry(QRect(160, 40, 59, 21));
        label_2 = new QLabel(windowLinkedList);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 40, 111, 21));
        InsertFront = new QPushButton(windowLinkedList);
        InsertFront->setObjectName(QStringLiteral("InsertFront"));
        InsertFront->setGeometry(QRect(39, 200, 151, 22));
        removeN = new QPushButton(windowLinkedList);
        removeN->setObjectName(QStringLiteral("removeN"));
        removeN->setGeometry(QRect(220, 170, 61, 22));
        positionInsert = new QLineEdit(windowLinkedList);
        positionInsert->setObjectName(QStringLiteral("positionInsert"));
        positionInsert->setGeometry(QRect(340, 140, 31, 20));
        listWidget = new QListWidget(windowLinkedList);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(40, 70, 331, 41));
        listWidget->setMovement(QListView::Static);
        listWidget->setFlow(QListView::LeftToRight);
        insertAfter = new QPushButton(windowLinkedList);
        insertAfter->setObjectName(QStringLiteral("insertAfter"));
        insertAfter->setGeometry(QRect(39, 230, 151, 22));
        insertN = new QPushButton(windowLinkedList);
        insertN->setObjectName(QStringLiteral("insertN"));
        insertN->setGeometry(QRect(220, 140, 61, 22));
        removeFront = new QPushButton(windowLinkedList);
        removeFront->setObjectName(QStringLiteral("removeFront"));
        removeFront->setGeometry(QRect(220, 230, 151, 22));
        label = new QLabel(windowLinkedList);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 140, 61, 21));

        retranslateUi(windowLinkedList);

        QMetaObject::connectSlotsByName(windowLinkedList);
    } // setupUi

    void retranslateUi(QDialog *windowLinkedList)
    {
        windowLinkedList->setWindowTitle(QApplication::translate("windowLinkedList", "Dialog", 0));
        label_3->setText(QApplication::translate("windowLinkedList", "Digite o n\303\272mero:", 0));
        label_4->setText(QApplication::translate("windowLinkedList", "Posi\303\247\303\243o:", 0));
        search->setText(QApplication::translate("windowLinkedList", "Search", 0));
        removeAfter->setText(QApplication::translate("windowLinkedList", "Remove after", 0));
        retTamanho->setText(QApplication::translate("windowLinkedList", "0", 0));
        label_2->setText(QApplication::translate("windowLinkedList", "Tamanho da lista:", 0));
        InsertFront->setText(QApplication::translate("windowLinkedList", "Insert front", 0));
        removeN->setText(QApplication::translate("windowLinkedList", "Remove", 0));
        insertAfter->setText(QApplication::translate("windowLinkedList", "Insert after", 0));
        insertN->setText(QApplication::translate("windowLinkedList", "Insert ", 0));
        removeFront->setText(QApplication::translate("windowLinkedList", "Remove front", 0));
        label->setText(QApplication::translate("windowLinkedList", "Posi\303\247\303\243o:", 0));
    } // retranslateUi

};

namespace Ui {
    class windowLinkedList: public Ui_windowLinkedList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWLINKEDLIST_H
