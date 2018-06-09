/********************************************************************************
** Form generated from reading UI file 'windowlista.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_windowlista
{
public:
    QLabel *label_2;
    QLabel *retTamanho;
    QListWidget *no4;
    QListWidget *no5;
    QListWidget *no6;
    QListWidget *no7;
    QListWidget *no8;
    QListWidget *no1;
    QLabel *label_7;
    QListWidget *no2;
    QListWidget *no3;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QListWidget *no9;
    QLabel *label_15;
    QListWidget *no10;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *entrada;
    QPushButton *insertN;
    QLabel *label;
    QLineEdit *positionInsert;
    QPushButton *pushButton_2;
    QPushButton *removeN;
    QLabel *label_4;
    QLineEdit *positionRemove;
    QPushButton *InsertFront;
    QPushButton *removeAfter;
    QPushButton *insertAfter;
    QPushButton *removeFront;

    void setupUi(QDialog *windowlista)
    {
        if (windowlista->objectName().isEmpty())
            windowlista->setObjectName(QStringLiteral("windowlista"));
        windowlista->resize(692, 318);
        label_2 = new QLabel(windowlista);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 50, 121, 21));
        retTamanho = new QLabel(windowlista);
        retTamanho->setObjectName(QStringLiteral("retTamanho"));
        retTamanho->setGeometry(QRect(340, 50, 59, 21));
        no4 = new QListWidget(windowlista);
        no4->setObjectName(QStringLiteral("no4"));
        no4->setGeometry(QRect(220, 100, 41, 21));
        no4->setMovement(QListView::Static);
        no4->setFlow(QListView::LeftToRight);
        no5 = new QListWidget(windowlista);
        no5->setObjectName(QStringLiteral("no5"));
        no5->setGeometry(QRect(290, 100, 41, 21));
        no5->setMovement(QListView::Static);
        no5->setFlow(QListView::LeftToRight);
        no6 = new QListWidget(windowlista);
        no6->setObjectName(QStringLiteral("no6"));
        no6->setGeometry(QRect(360, 100, 41, 21));
        no6->setMovement(QListView::Static);
        no6->setFlow(QListView::LeftToRight);
        no7 = new QListWidget(windowlista);
        no7->setObjectName(QStringLiteral("no7"));
        no7->setGeometry(QRect(430, 100, 41, 21));
        no7->setMovement(QListView::Static);
        no7->setFlow(QListView::LeftToRight);
        no8 = new QListWidget(windowlista);
        no8->setObjectName(QStringLiteral("no8"));
        no8->setGeometry(QRect(500, 100, 41, 21));
        no8->setMovement(QListView::Static);
        no8->setFlow(QListView::LeftToRight);
        no1 = new QListWidget(windowlista);
        no1->setObjectName(QStringLiteral("no1"));
        no1->setGeometry(QRect(10, 100, 41, 21));
        no1->setMovement(QListView::Static);
        no1->setFlow(QListView::LeftToRight);
        label_7 = new QLabel(windowlista);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 100, 16, 21));
        no2 = new QListWidget(windowlista);
        no2->setObjectName(QStringLiteral("no2"));
        no2->setGeometry(QRect(80, 100, 41, 21));
        no2->setMovement(QListView::Static);
        no2->setFlow(QListView::LeftToRight);
        no3 = new QListWidget(windowlista);
        no3->setObjectName(QStringLiteral("no3"));
        no3->setGeometry(QRect(150, 100, 41, 21));
        no3->setMovement(QListView::Static);
        no3->setFlow(QListView::LeftToRight);
        label_9 = new QLabel(windowlista);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 100, 16, 21));
        label_8 = new QLabel(windowlista);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(340, 100, 16, 21));
        label_10 = new QLabel(windowlista);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(200, 100, 16, 21));
        label_11 = new QLabel(windowlista);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(270, 100, 16, 21));
        label_12 = new QLabel(windowlista);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(410, 100, 16, 21));
        label_13 = new QLabel(windowlista);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(480, 100, 16, 21));
        label_14 = new QLabel(windowlista);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(550, 100, 16, 21));
        no9 = new QListWidget(windowlista);
        no9->setObjectName(QStringLiteral("no9"));
        no9->setGeometry(QRect(570, 100, 41, 21));
        no9->setMovement(QListView::Static);
        no9->setFlow(QListView::LeftToRight);
        label_15 = new QLabel(windowlista);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(620, 100, 16, 21));
        no10 = new QListWidget(windowlista);
        no10->setObjectName(QStringLiteral("no10"));
        no10->setGeometry(QRect(640, 100, 41, 21));
        no10->setMovement(QListView::Static);
        no10->setFlow(QListView::LeftToRight);
        layoutWidget = new QWidget(windowlista);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 160, 560, 120));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        entrada = new QLineEdit(layoutWidget);
        entrada->setObjectName(QStringLiteral("entrada"));

        gridLayout->addWidget(entrada, 0, 1, 1, 1);

        insertN = new QPushButton(layoutWidget);
        insertN->setObjectName(QStringLiteral("insertN"));

        gridLayout->addWidget(insertN, 0, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 3, 1, 1);

        positionInsert = new QLineEdit(layoutWidget);
        positionInsert->setObjectName(QStringLiteral("positionInsert"));

        gridLayout->addWidget(positionInsert, 0, 4, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 2);

        removeN = new QPushButton(layoutWidget);
        removeN->setObjectName(QStringLiteral("removeN"));

        gridLayout->addWidget(removeN, 1, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        positionRemove = new QLineEdit(layoutWidget);
        positionRemove->setObjectName(QStringLiteral("positionRemove"));

        gridLayout->addWidget(positionRemove, 1, 4, 1, 1);

        InsertFront = new QPushButton(layoutWidget);
        InsertFront->setObjectName(QStringLiteral("InsertFront"));

        gridLayout->addWidget(InsertFront, 2, 0, 1, 2);

        removeAfter = new QPushButton(layoutWidget);
        removeAfter->setObjectName(QStringLiteral("removeAfter"));

        gridLayout->addWidget(removeAfter, 2, 2, 1, 3);

        insertAfter = new QPushButton(layoutWidget);
        insertAfter->setObjectName(QStringLiteral("insertAfter"));

        gridLayout->addWidget(insertAfter, 3, 0, 1, 2);

        removeFront = new QPushButton(layoutWidget);
        removeFront->setObjectName(QStringLiteral("removeFront"));

        gridLayout->addWidget(removeFront, 3, 2, 1, 3);

        layoutWidget->raise();
        no3->raise();
        label_2->raise();
        retTamanho->raise();
        no4->raise();
        no5->raise();
        no6->raise();
        no7->raise();
        no8->raise();
        no1->raise();
        label_7->raise();
        no2->raise();
        label_9->raise();
        label_8->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        no9->raise();
        label_15->raise();
        no10->raise();

        retranslateUi(windowlista);

        QMetaObject::connectSlotsByName(windowlista);
    } // setupUi

    void retranslateUi(QDialog *windowlista)
    {
        windowlista->setWindowTitle(QApplication::translate("windowlista", "Lista Dubplamente Encadeada", 0));
        label_2->setText(QApplication::translate("windowlista", "Tamanho da lista:", 0));
        retTamanho->setText(QApplication::translate("windowlista", "0", 0));
        label_7->setText(QApplication::translate("windowlista", "\342\206\224", 0));
        label_9->setText(QApplication::translate("windowlista", "\342\206\224", 0));
        label_8->setText(QApplication::translate("windowlista", "\342\206\224", 0));
        label_10->setText(QApplication::translate("windowlista", "\342\206\224", 0));
        label_11->setText(QApplication::translate("windowlista", "\342\206\224", 0));
        label_12->setText(QApplication::translate("windowlista", "\342\206\224", 0));
        label_13->setText(QApplication::translate("windowlista", "\342\206\224", 0));
        label_14->setText(QApplication::translate("windowlista", "\342\206\224", 0));
        label_15->setText(QApplication::translate("windowlista", "\342\206\224", 0));
        label_3->setText(QApplication::translate("windowlista", "Digite o n\303\272mero:", 0));
        insertN->setText(QApplication::translate("windowlista", "Insert ", 0));
        label->setText(QApplication::translate("windowlista", "Posi\303\247\303\243o:", 0));
        pushButton_2->setText(QApplication::translate("windowlista", "Search", 0));
        removeN->setText(QApplication::translate("windowlista", "Remove", 0));
        label_4->setText(QApplication::translate("windowlista", "Posi\303\247\303\243o:", 0));
        InsertFront->setText(QApplication::translate("windowlista", "Insert front", 0));
        removeAfter->setText(QApplication::translate("windowlista", "Remove after", 0));
        insertAfter->setText(QApplication::translate("windowlista", "Insert after", 0));
        removeFront->setText(QApplication::translate("windowlista", "Remove front", 0));
    } // retranslateUi

};

namespace Ui {
    class windowlista: public Ui_windowlista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWLISTA_H
