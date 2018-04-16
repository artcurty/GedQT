#include "windowpilha.h"
#include "ui_windowpilha.h"
#include "pilha.h"
#include "node.h"
#include <QtAlgorithms>

Pilha str;
windowpilha::windowpilha(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::windowpilha)
{
    ui->setupUi(this);
}

windowpilha::~windowpilha()
{
    delete ui;
}

void windowpilha::on_OK_clicked()
{
    QString ent=ui->entrada->text();
   int valor = ent.toInt();
   str.Push(valor);

   int v = str.ListaPilha();
   QString empilha = QVariant(v).toString();
   ui->listWidget->insertItem(0,empilha);
   int cont = str.tamPilha();
   QString contador = QVariant(cont).toString();
   ui->tamanhoPilha->setText(contador);
}

void windowpilha::on_pushButton_clicked()
{   if(!str.PilhaVazia()){
    str.Pop();
    ui->listWidget->item(0)->setSelected(true);
    delete ui->listWidget->item(0);

    int cont2 = str.tamPilha();
    QString contador2 = QVariant(cont2).toString();
    ui->tamanhoPilha->setText(contador2);
    }
}

void windowpilha::on_Peek_clicked()
{   if(!str.PilhaVazia())
    {
    int topo = str.Top();
    QString topoP = QVariant(topo).toString();
    ui->resultadoTop->setText(topoP);
    ui->listWidget->item(0)->setSelected(true);
    }
        else
    {
        ui->resultadoTop->setText("NULL");
    }
}
