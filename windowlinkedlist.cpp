#include "windowlinkedlist.h"
#include "ui_windowlinkedlist.h"
#include "linkedlist.h"
#include  <QMessageBox>
windowLinkedList::windowLinkedList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::windowLinkedList)
{
    ui->setupUi(this);
}

windowLinkedList::~windowLinkedList()
{
    delete ui;
}
 linkedlist nLL;

void windowLinkedList::on_search_clicked()
{   if(!nLL.vazia()){
        QString text = ui->entrada->text();
        int vPesq = text.toInt();
        int localizacao=nLL.Search(vPesq);
        if(localizacao != -1){
            ui->listWidget->item(localizacao)->setSelected(true);

        }else{
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

void windowLinkedList::on_InsertFront_clicked()
{
    if(ui->entrada->text()==NULL)
            {
                QMessageBox::warning(
                            this,
                            tr("ATENÇÃO"),
                            tr("Nenhuma valor inserido.") );
    }else{

        QString text = ui->entrada->text();
        int v = text.toInt();
        nLL.InsertCabeca(v);
        int local = nLL.Search(v);
        ui->listWidget->insertItem(local,text);

        int reTamanho = nLL.Tamanho();
        QString nTamanho = QVariant(reTamanho).toString();
        ui->retTamanho->setText(nTamanho);
       }
}

void windowLinkedList::on_insertAfter_clicked()
{
    if(ui->entrada->text()==NULL)
            {
                QMessageBox::warning(
                            this,
                            tr("ATENÇÃO"),
                            tr("Nenhuma valor inserido.") );
    }else{
        QString entrada = ui->entrada->text();
        int valor = entrada.toInt();
        nLL.InsertCalda(valor);

        int locnaList = nLL.Search(valor);
        ui->listWidget->insertItem(locnaList,entrada);


        int reTamanho = nLL.Tamanho();
        QString nTamanho = QVariant(reTamanho).toString();
        ui->retTamanho->setText(nTamanho);
        }

}

void windowLinkedList::on_insertN_clicked()
{   QString text = ui->entrada->text();
    QString nLoc = ui->positionInsert->text();
    int v2 = text.toInt();
    int vLoc = nLoc.toInt();
    int reTamanho = nLL.Tamanho();

    if(ui->entrada->text()==NULL){
                QMessageBox::warning(
                            this,
                            tr("ATENÇÃO"),
                            tr("Nenhuma valor inserido.") );
    }else if(ui->positionInsert->text()==NULL){
            QMessageBox::warning(
                        this,
                        tr("ATENÇÃO"),
                        tr("Nenhuma posição inserida.") );
        }else {

        if(reTamanho>=1 && vLoc<=reTamanho-1){

            nLL.InsertNp(v2,vLoc);
            int loc = nLL.Search(v2);
            ui->listWidget->insertItem(loc,text);

            int reTamanho = nLL.Tamanho();
            QString nTamanho = QVariant(reTamanho).toString();
            ui->retTamanho->setText(nTamanho);
        }
        else{
            QMessageBox::warning(
                        this,
                        tr("ATENÇÃO"),
                        tr("insira um posição do tipo 1...N-1") );
        }
    }
 }


void windowLinkedList::on_removeN_clicked()
{
  QString eText = ui->positionRemove->text();
  int locRem = eText.toInt();
  int reTamanho = nLL.Tamanho();

    if(nLL.vazia()){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Lista vazia") );

    }else if(ui->positionRemove->text()==NULL){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Nenhuma posição inserida") );
     }else if(locRem>nLL.Tamanho()){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Esta posição é maior que a lista") );
     }else{
        if(locRem>=1 && locRem<=reTamanho-2){
            nLL.RemoveNp(locRem);
            delete ui->listWidget->item(locRem);

            int reTamanho2 = nLL.Tamanho();
            QString nTamanho = QVariant(reTamanho2).toString();
            ui->retTamanho->setText(nTamanho);
        }
        else{
            QMessageBox::warning(
                        this,
                        tr("ATENÇÃO"),
                        tr("insira um posição do tipo 1...N-2") );
        }
    }
}

void windowLinkedList::on_removeAfter_clicked()
{   if(nLL.vazia()){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Lista vazia") );

    }else{
        nLL.RemoveTras();
        int tam = nLL.Tamanho();
        delete ui->listWidget->item(tam);

        int reTamanho = nLL.Tamanho();
        QString nTamanho = QVariant(reTamanho).toString();
        ui->retTamanho->setText(nTamanho);
    }

}

void windowLinkedList::on_removeFront_clicked()
{  if(!nLL.vazia()){
        nLL.RemoveFrente();
        delete ui->listWidget->item(0);

        int reTamanho = nLL.Tamanho();
        QString nTamanho = QVariant(reTamanho).toString();
        ui->retTamanho->setText(nTamanho);
    }else{

        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("A lista esta vazia") );
    }
}
