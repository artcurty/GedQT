/********************************************************************************
** Form generated from reading UI file 'windowarvore.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWARVORE_H
#define UI_WINDOWARVORE_H

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

class Ui_windowarvore
{
public:
    QListWidget *DRaiz;
    QListWidget *F;
    QLabel *label_9;
    QListWidget *A;
    QLabel *label_4;
    QListWidget *G;
    QListWidget *B;
    QPushButton *inserir;
    QListWidget *E;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QPushButton *busca;
    QListWidget *C;
    QLabel *label_3;
    QPushButton *inorder;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *id;
    QLabel *label;
    QLabel *testeorde;

    void setupUi(QDialog *windowarvore)
    {
        if (windowarvore->objectName().isEmpty())
            windowarvore->setObjectName(QStringLiteral("windowarvore"));
        windowarvore->resize(546, 300);
        DRaiz = new QListWidget(windowarvore);
        DRaiz->setObjectName(QStringLiteral("DRaiz"));
        DRaiz->setGeometry(QRect(320, 40, 31, 21));
        F = new QListWidget(windowarvore);
        F->setObjectName(QStringLiteral("F"));
        F->setGeometry(QRect(360, 80, 31, 21));
        label_9 = new QLabel(windowarvore);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(350, 60, 16, 17));
        A = new QListWidget(windowarvore);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(240, 120, 31, 21));
        label_4 = new QLabel(windowarvore);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 100, 16, 17));
        G = new QListWidget(windowarvore);
        G->setObjectName(QStringLiteral("G"));
        G->setGeometry(QRect(390, 120, 31, 21));
        B = new QListWidget(windowarvore);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(270, 80, 31, 21));
        inserir = new QPushButton(windowarvore);
        inserir->setObjectName(QStringLiteral("inserir"));
        inserir->setGeometry(QRect(50, 130, 91, 25));
        inserir->setCursor(QCursor(Qt::PointingHandCursor));
        E = new QListWidget(windowarvore);
        E->setObjectName(QStringLiteral("E"));
        E->setGeometry(QRect(340, 120, 31, 21));
        label_8 = new QLabel(windowarvore);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 100, 16, 17));
        lineEdit = new QLineEdit(windowarvore);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 100, 91, 25));
        busca = new QPushButton(windowarvore);
        busca->setObjectName(QStringLiteral("busca"));
        busca->setGeometry(QRect(50, 170, 91, 25));
        busca->setCursor(QCursor(Qt::PointingHandCursor));
        C = new QListWidget(windowarvore);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(290, 120, 31, 21));
        label_3 = new QLabel(windowarvore);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 60, 16, 17));
        inorder = new QPushButton(windowarvore);
        inorder->setObjectName(QStringLiteral("inorder"));
        inorder->setGeometry(QRect(50, 210, 91, 25));
        inorder->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(windowarvore);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 100, 16, 17));
        label_7 = new QLabel(windowarvore);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(390, 100, 16, 17));
        id = new QLabel(windowarvore);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(140, 50, 67, 17));
        label = new QLabel(windowarvore);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 180, 171, 17));
        testeorde = new QLabel(windowarvore);
        testeorde->setObjectName(QStringLiteral("testeorde"));
        testeorde->setGeometry(QRect(280, 180, 191, 17));

        retranslateUi(windowarvore);

        QMetaObject::connectSlotsByName(windowarvore);
    } // setupUi

    void retranslateUi(QDialog *windowarvore)
    {
        windowarvore->setWindowTitle(QApplication::translate("windowarvore", "Arvore Binaria", 0));
        label_9->setText(QApplication::translate("windowarvore", "\342\206\230", 0));
        label_4->setText(QApplication::translate("windowarvore", "\342\206\231", 0));
        inserir->setText(QApplication::translate("windowarvore", "Insert", 0));
        label_8->setText(QApplication::translate("windowarvore", "\342\206\230", 0));
        busca->setText(QApplication::translate("windowarvore", "Search", 0));
        label_3->setText(QApplication::translate("windowarvore", "\342\206\231", 0));
        inorder->setText(QApplication::translate("windowarvore", "Inorder", 0));
        label_2->setText(QApplication::translate("windowarvore", "\342\206\231", 0));
        label_7->setText(QApplication::translate("windowarvore", "\342\206\230", 0));
        id->setText(QString());
        label->setText(QApplication::translate("windowarvore", "Inorder - >", 0));
        testeorde->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class windowarvore: public Ui_windowarvore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWARVORE_H
