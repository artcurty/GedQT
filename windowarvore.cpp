#include "windowarvore.h"
#include "ui_windowarvore.h"
#include "no_arvore.h"
#include "arvore.h"
#include <QMessageBox>

 btree btr;
windowarvore::windowarvore(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::windowarvore)
{
    ui->setupUi(this);
}

windowarvore::~windowarvore()
{
    delete ui;
}

void windowarvore::on_inserir_clicked()
{
    if(ui->lineEdit->text()==NULL){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Digite algum numero") );
    }else{
       QString entrada = ui->lineEdit->text();
       int valEntrada = entrada.toInt();

       int id = btr.insert(valEntrada);

    if(id>6){
           QMessageBox::warning(
                       this,
                       tr("ATENÇÃO"),
                       tr("limite de camadas da arvore") );

      }else{
       QString id_ = QVariant(id).toString();
       ui->id->setText(id_);
       if (id==0){
           ui->DRaiz->insertItem(0,entrada);
       }else if(id==1){
           ui->B->insertItem(0,entrada);
       }else if(id==2){
           ui->F->insertItem(0,entrada);
       }else if(id==3){
           ui->A->insertItem(0,entrada);
       }else if(id==4){
           ui->C->insertItem(0,entrada);
       }else if(id==5){
           ui->E->insertItem(0,entrada);
       }else if(id==6){
           ui->G->insertItem(0,entrada);
       }
   }
  }
}

void windowarvore::on_inorder_clicked()
{
   if(ui->lineEdit->text()==NULL){
    QMessageBox::warning(
                this,
                tr("ATENÇÃO"),
                tr("Digite algum numero") );
    }else{
        string str = btr.inorder_print();

        QString qstr = QString::fromStdString(str);
        ui->testeorde->setText(qstr);
    }
}


void windowarvore::on_busca_clicked()
{   QString busca = ui->lineEdit->text();
    int nBusca = busca.toInt();
    if(btr.search(nBusca)==1){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Numero encontrado") );
    }else if(btr.search(nBusca)==0){

        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Numero não existe na árvore") );
    }
}
