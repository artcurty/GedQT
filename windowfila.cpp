#include "windowfila.h"
#include "ui_windowfila.h"
#include "fila.h"
#include <QtAlgorithms>
#include "node.h"

Fila nfila;

windowfila::windowfila(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::windowfila)
{
    ui->setupUi(this);
}

windowfila::~windowfila()
{
    delete ui;
}


void windowfila::on_Enqueue_clicked()
{

   QString inserido=ui->valorEntrada->text();
   int nvalor = inserido.toInt();
   nfila.Enqueue(nvalor);

   ui->listfila->addItem(inserido);

   int cont = nfila.tamFila();
   QString contador = QVariant(cont).toString();
   ui->tamanhofila->setText(contador);

}

void windowfila::on_Dequeue_clicked()
{
   nfila.Dequeue();

   delete ui->listfila->item(0);
   int cont1 = nfila.tamFila();
   QString contador1 = QVariant(cont1).toString();
   ui->tamanhofila->setText(contador1);

}

void windowfila::on_Peek_clicked()
{   if(!nfila.fVazia())
    {
        int vFront = nfila.Peek();
        QString frente = QVariant(vFront).toString();
        ui->pFila->setText(frente);
        ui->listfila->item(0)->setSelected(true);
     }
        else
    {

        ui->pFila->setText("NULL");
    }

    }
