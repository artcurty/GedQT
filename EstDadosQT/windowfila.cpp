#include "windowfila.h"
#include "ui_windowfila.h"
#include "fila.h"
#include <QtAlgorithms>
#include "node.h"
#include <QMessageBox>
#define NULL 0
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
{  if(ui->valorEntrada->text()==NULL){

        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Digite algum numero para ser inserido."));
    }else if(nfila.tamFila()>10){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Fila cheia"));
    }else{

        QString inserido=ui->valorEntrada->text();
        int nvalor = inserido.toInt();
        nfila.Enqueue(nvalor);

        ui->listfila->addItem(inserido);

        int cont = nfila.tamFila();
        QString contador = QVariant(cont).toString();
        ui->tamanhofila->setText(contador);
    }

}

void windowfila::on_Dequeue_clicked()
{   if(nfila.fVazia())
    {
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Fila vazia."));
    }else{
        nfila.Dequeue();

        delete ui->listfila->item(0);
        int cont1 = nfila.tamFila();
        QString contador1 = QVariant(cont1).toString();
        ui->tamanhofila->setText(contador1);

    }
}

void windowfila::on_Peek_clicked()
{   if(!nfila.fVazia())
    {
        int vFront = nfila.Peek();
        QString frente = QVariant(vFront).toString();
        ui->pFila->setText(frente);
        ui->listfila->item(0)->setSelected(true);
     }else{

        ui->pFila->setText("NULL");
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Fila vazia."));
    }

}
