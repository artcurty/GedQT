#include "windowlista.h"
#include "ui_windowlista.h"
#include "node.h"
#include "lista.h"
#include <QMessageBox>
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

void windowlista::on_pushButton_2_clicked() //Button search
{      if(!nLista.vazia()){
        QString text = ui->entrada->text();
        int vPesq = text.toInt();
        int localizacao=nLista.Search(vPesq);

        if(localizacao != -1){
            ui->listWidget->item(localizacao)->setSelected(true);

        }else if(ui->entrada->text()==NULL){
            QMessageBox::warning(
                        this,
                        tr("ATENÇÃO"),
                        tr("Nenhum número digitao") );
        }else if(localizacao = -1){
            QMessageBox::warning(
                        this,
                        tr("ATENÇÃO"),
                        tr("Numero não encontrado") );
        }
       }else{
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("A lista esta vazia") );
      }
}

void windowlista::on_InsertFront_clicked()
{   if(ui->entrada->text()==NULL)
    {
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Nenhuma valor inserido.") );
    }else{
        QString entrada = ui->entrada->text();
        int valor = entrada.toInt();
        nLista.InsertCabeca(valor);

        int loc = nLista.Search(valor);
        ui->listWidget->insertItem(loc,entrada);

        int cont = nLista.Tamanho();
        QString contador = QVariant(cont).toString();
        ui->retTamanho->setText(contador);
    }
}

void windowlista::on_insertAfter_clicked()
{   if(ui->entrada->text()==NULL)
    {
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Nenhuma valor inserido.") );
    }else{
        QString entrada = ui->entrada->text();
        int valor = entrada.toInt();
        nLista.InsertCalda(valor);

        int locnaList = nLista.Search(valor);
        ui->listWidget->insertItem(locnaList,entrada);


        int cont = nLista.Tamanho();
        QString contador = QVariant(cont).toString();
        ui->retTamanho->setText(contador);
    }

}

void windowlista::on_insertN_clicked()
{

    if(ui->entrada->text()==NULL)
    {
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Nenhuma valor inserido.") );
    }
    else if(ui->positionInsert->text()==NULL){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Nenhuma posição inserida") );
    }else{

            QString text = ui->entrada->text();
            QString nLoc = ui->positionInsert->text();
            int v2 = text.toInt();
            int vLoc = nLoc.toInt();
            int tamanho = nLista.Tamanho();
            if(vLoc>=1 && vLoc<=tamanho-1)
                {
                    nLista.InsertNp(v2,vLoc);
                    int loc = nLista.Search(v2);
                    ui->listWidget->insertItem(loc,text);

                    int reTamanho = nLista.Tamanho();
                    QString nTamanho = QVariant(reTamanho).toString();
                    ui->retTamanho->setText(nTamanho);

                 }else{
                QMessageBox::warning(
                        this,
                        tr("ATENÇÃO"),
                        tr("insira um posição do tipo 1...N-1") );
        }
    }
}


void windowlista::on_removeN_clicked()
{
    QString posit = ui->positionRemove->text();
    int pos = posit.toInt();
    int cont = nLista.Tamanho();

    if(nLista.vazia()){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Lista vazia") );

    }else if(ui->positionRemove->text()==NULL){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Nenhuma posição inserida") );
     }else if(pos>nLista.Tamanho()){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Esta posição é maior que a lista") );
     }else{
            if(pos>=1 && pos<=cont-2){

                QString posit = ui->positionRemove->text();
                int pos = posit.toInt();
                nLista.RemoveNp(pos);
                delete ui->listWidget->item(pos);

                int cont2 = nLista.Tamanho();
                QString contador2 = QVariant(cont2).toString();
                ui->retTamanho->setText(contador2);
            }else{
                QMessageBox::warning(
                            this,
                            tr("ATENÇÃO"),
                            tr("insira um posição do tipo 1...N-2") );
            }
     }
}


void windowlista::on_removeAfter_clicked()
{  if(nLista.vazia()){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Lista vazia") );

    }else{
        nLista.RemoveTras();
        int tam = nLista.Tamanho();
        delete ui->listWidget->item(tam);


        QString contador3 = QVariant(tam).toString();
        ui->retTamanho->setText(contador3);

    }
}

void windowlista::on_removeFront_clicked()
{ if(nLista.vazia()){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Lista vazia") );

    }else{
        nLista.RemoveFrente();
        delete ui->listWidget->item(0);

        int cont4 = nLista.Tamanho();
        QString contador4 = QVariant(cont4).toString();
        ui->retTamanho->setText(contador4);
    }
}
