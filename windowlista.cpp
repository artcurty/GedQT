#include "windowlista.h"
#include "ui_windowlista.h"
#include "node.h"
#include "lista.h"
lista nLista;

windowlista::windowlista(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::windowlista)
{
    ui->setupUi(this);
}

windowlista::~windowlista()
{
    delete ui;
}

void windowlista::on_pushButton_2_clicked()
{

}

void windowlista::on_InsertFront_clicked()
{

}

void windowlista::on_insertAfter_clicked()
{

}

void windowlista::on_insertN_clicked()
{

}

void windowlista::on_removeN_clicked()
{

}

void windowlista::on_removeAfter_clicked()
{

}

void windowlista::on_removeFront_clicked()
{

}
