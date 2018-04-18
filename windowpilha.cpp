#include "windowpilha.h"
#include "ui_windowpilha.h"
#include "pilha.h"
#include "node.h"
#include <QtAlgorithms>
#include <QMessageBox>

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
{   if(ui->entrada->text()==NULL){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Digite algum numero para ser inserido."));
    }else{
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
}

void windowpilha::on_pushButton_clicked()
{   if(str.PilhaVazia())
    {
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Fila vazia."));
    }
    else{
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
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Pilha vazia."));
    }
}
