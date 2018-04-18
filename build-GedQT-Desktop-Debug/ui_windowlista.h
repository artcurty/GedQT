/********************************************************************************
** Form generated from reading UI file 'windowlista.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWLISTA_H
#define UI_WINDOWLISTA_H

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

class Ui_windowlista
{
public:
    QPushButton *insertAfter;
    QPushButton *pushButton_2;
    QPushButton *removeAfter;
    QPushButton *InsertFront;
    QPushButton *insertN;
    QPushButton *removeFront;
    QPushButton *removeN;
    QLineEdit *positionInsert;
    QLineEdit *positionRemove;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *entrada;
    QLabel *label_3;
    QListWidget *listWidget;
    QLabel *label_2;
    QLabel *retTamanho;

    void setupUi(QDialog *windowlista)
    {
        if (windowlista->objectName().isEmpty())
            windowlista->setObjectName(QStringLiteral("windowlista"));
        windowlista->resize(400, 319);
        insertAfter = new QPushButton(windowlista);
        insertAfter->setObjectName(QStringLiteral("insertAfter"));
        insertAfter->setGeometry(QRect(29, 230, 151, 22));
        pushButton_2 = new QPushButton(windowlista);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(29, 170, 151, 22));
        removeAfter = new QPushButton(windowlista);
        removeAfter->setObjectName(QStringLiteral("removeAfter"));
        removeAfter->setGeometry(QRect(210, 202, 151, 22));
        InsertFront = new QPushButton(windowlista);
        InsertFront->setObjectName(QStringLiteral("InsertFront"));
        InsertFront->setGeometry(QRect(29, 200, 151, 22));
        insertN = new QPushButton(windowlista);
        insertN->setObjectName(QStringLiteral("insertN"));
        insertN->setGeometry(QRect(210, 140, 61, 22));
        removeFront = new QPushButton(windowlista);
        removeFront->setObjectName(QStringLiteral("removeFront"));
        removeFront->setGeometry(QRect(210, 230, 151, 22));
        removeN = new QPushButton(windowlista);
        removeN->setObjectName(QStringLiteral("removeN"));
        removeN->setGeometry(QRect(210, 170, 61, 22));
        positionInsert = new QLineEdit(windowlista);
        positionInsert->setObjectName(QStringLiteral("positionInsert"));
        positionInsert->setGeometry(QRect(330, 140, 31, 20));
        positionRemove = new QLineEdit(windowlista);
        positionRemove->setObjectName(QStringLiteral("positionRemove"));
        positionRemove->setGeometry(QRect(330, 170, 31, 22));
        label = new QLabel(windowlista);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 140, 61, 21));
        label_4 = new QLabel(windowlista);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 170, 59, 21));
        entrada = new QLineEdit(windowlista);
        entrada->setObjectName(QStringLiteral("entrada"));
        entrada->setGeometry(QRect(139, 140, 41, 22));
        label_3 = new QLabel(windowlista);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 130, 101, 41));
        listWidget = new QListWidget(windowlista);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 70, 331, 41));
        listWidget->setMovement(QListView::Static);
        listWidget->setFlow(QListView::LeftToRight);
        label_2 = new QLabel(windowlista);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 40, 111, 21));
        retTamanho = new QLabel(windowlista);
        retTamanho->setObjectName(QStringLiteral("retTamanho"));
        retTamanho->setGeometry(QRect(150, 40, 59, 21));
        insertAfter->raise();
        pushButton_2->raise();
        removeAfter->raise();
        InsertFront->raise();
        insertN->raise();
        removeFront->raise();
        removeN->raise();
        entrada->raise();
        positionInsert->raise();
        positionRemove->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        listWidget->raise();
        label_2->raise();
        retTamanho->raise();

        retranslateUi(windowlista);

        QMetaObject::connectSlotsByName(windowlista);
    } // setupUi

    void retranslateUi(QDialog *windowlista)
    {
        windowlista->setWindowTitle(QApplication::translate("windowlista", "Dialog", 0));
        insertAfter->setText(QApplication::translate("windowlista", "Insert after", 0));
        pushButton_2->setText(QApplication::translate("windowlista", "Search", 0));
        removeAfter->setText(QApplication::translate("windowlista", "Remove after", 0));
        InsertFront->setText(QApplication::translate("windowlista", "Insert front", 0));
        insertN->setText(QApplication::translate("windowlista", "Insert ", 0));
        removeFront->setText(QApplication::translate("windowlista", "Remove front", 0));
        removeN->setText(QApplication::translate("windowlista", "Remove", 0));
        label->setText(QApplication::translate("windowlista", "Posi\303\247\303\243o:", 0));
        label_4->setText(QApplication::translate("windowlista", "Posi\303\247\303\243o:", 0));
        label_3->setText(QApplication::translate("windowlista", "Digite o n\303\272mero:", 0));
        label_2->setText(QApplication::translate("windowlista", "Tamanho da lista:", 0));
        retTamanho->setText(QApplication::translate("windowlista", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class windowlista: public Ui_windowlista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWLISTA_H
