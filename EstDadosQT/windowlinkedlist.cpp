#include "windowlinkedlist.h"
#include "ui_windowlinkedlist.h"
#include "linkedlist.h"
#include  <QMessageBox>

ListaSeq nLS;
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

void windowLinkedList::on_search_clicked()
{
    if(!nLS.vazia()){
        QString text = ui->entrada->text();
          int vPesq = text.toInt();
        if(nLS.getPosicao(vPesq) == 1){
         ui->elem1->item(0)->setSelected(true);
        }else if(nLS.getPosicao(vPesq) == 2 ){
            ui->elem2->item(0)->setSelected(true);
        }else if(nLS.getPosicao(vPesq) == 3 ){
            ui->elem3->item(0)->setSelected(true);
        }else if(nLS.getPosicao(vPesq) == 4 ){
            ui->elem4->item(0)->setSelected(true);
        }else if(nLS.getPosicao(vPesq) == 5 ){
            ui->elem5->item(0)->setSelected(true);
        }else if(nLS.getPosicao(vPesq) == 6 ){
            ui->elem6->item(0)->setSelected(true);
        }else if(nLS.getPosicao(vPesq) == 7 ){
            ui->elem7->item(0)->setSelected(true);
        }else if(nLS.getPosicao(vPesq) == 8 ){
            ui->elem8->item(0)->setSelected(true);
        }else if(nLS.getPosicao(vPesq) == 9 ){
            ui->elem9->item(0)->setSelected(true);
        }else if(nLS.getPosicao(vPesq) == 10 ){
            ui->elem10->item(0)->setSelected(true);
        }
        else if(ui->entrada->text()==NULL){
            QMessageBox::warning(
                        this,
                        tr("ATENÇÃO"),
                        tr("Nenhum número digitao") );
        }else if(nLS.getPosicao(vPesq) ==-1){
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
        }else if(nLS.cheia()){

                    QMessageBox::warning(
                                this,
                                tr("ATENÇÃO"),
                                tr("Lista cheia") );


        }else{
            QString entrada = ui->entrada->text();
            int valor = entrada.toInt();
            nLS.insere(1,valor);
            int loc = nLS.getPosicao(valor);

               ui->elem10->insertItem(0,ui->elem9->takeItem(0));
               ui->elem9->insertItem(0,ui->elem8->takeItem(0));
               ui->elem8->insertItem(0,ui->elem7->takeItem(0));
               ui->elem7->insertItem(0,ui->elem6->takeItem(0));
               ui->elem6->insertItem(0,ui->elem5->takeItem(0));
               ui->elem5->insertItem(0,ui->elem4->takeItem(0));
               ui->elem4->insertItem(0,ui->elem3->takeItem(0));
               ui->elem3->insertItem(0,ui->elem2->takeItem(0));
               ui->elem2->insertItem(0,ui->elem1->takeItem(0));


             ui->elem1->insertItem(loc,entrada); //inserindo um elemento no primeiro nó (frente)


            int cont = nLS.getTamanho();
            QString contador = QVariant(cont).toString();
            ui->retTamanho->setText(contador);
        }
}

void windowLinkedList::on_insertAfter_clicked()
{ if(ui->entrada->text()==NULL)
    {
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Nenhuma valor inserido.") );
    }else if(nLS.cheia()){

        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Lista cheia") );

    }
    else{
        QString entrada = ui->entrada->text();
        int valor = entrada.toInt();
        int tam = nLS.getTamanho();
        int local = tam+1;
        nLS.insere(local,valor);

        int locnaList = nLS.getPosicao(valor);

        if(locnaList == 1){
            ui->elem1->insertItem(0,entrada);

        }else if(locnaList == 2){
            ui->elem2->insertItem(0,entrada);
        }else if(locnaList == 3){
            ui->elem3->insertItem(0,entrada);
        }else if(locnaList == 4){
            ui->elem4->insertItem(0,entrada);
        }else if(locnaList == 5){
            ui->elem5->insertItem(0,entrada);
        }else if(locnaList == 6){
            ui->elem6->insertItem(0,entrada);
        }else if(locnaList == 7){
            ui->elem7->insertItem(0,entrada);
        }else if(locnaList == 8){
            ui->elem8->insertItem(0,entrada);
        }else if(locnaList == 9){
            ui->elem9->insertItem(0,entrada);
        }else if(locnaList == 10){
            ui->elem10->insertItem(0,entrada);
        }
        int cont = nLS.getTamanho();
        QString contador = QVariant(cont).toString();
        ui->retTamanho->setText(contador);
    }
}

void windowLinkedList::on_insertN_clicked()
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
            int tamanho = nLS.getTamanho();
            if(vLoc>=2 && vLoc<=tamanho)
                {
                    nLS.insere(vLoc,v2);
                    int pos = nLS.getPosicao(v2);
                         if(pos == 2){
                              ui->elem10->insertItem(0,ui->elem9->takeItem(0));
                              ui->elem9->insertItem(0,ui->elem8->takeItem(0));
                              ui->elem8->insertItem(0,ui->elem7->takeItem(0));
                              ui->elem7->insertItem(0,ui->elem6->takeItem(0));
                              ui->elem6->insertItem(0,ui->elem5->takeItem(0));
                              ui->elem5->insertItem(0,ui->elem4->takeItem(0));
                              ui->elem4->insertItem(0,ui->elem3->takeItem(0));
                              ui->elem3->insertItem(0,ui->elem2->takeItem(0));
                              ui->elem2->insertItem(0,text);
                           }else if(pos == 3){
                             ui->elem10->insertItem(0,ui->elem9->takeItem(0));
                             ui->elem9->insertItem(0,ui->elem8->takeItem(0));
                             ui->elem8->insertItem(0,ui->elem7->takeItem(0));
                             ui->elem7->insertItem(0,ui->elem6->takeItem(0));
                             ui->elem6->insertItem(0,ui->elem5->takeItem(0));
                             ui->elem5->insertItem(0,ui->elem4->takeItem(0));
                             ui->elem4->insertItem(0,ui->elem3->takeItem(0));
                             ui->elem3->insertItem(0,text);
                           }else if(pos == 4){
                             ui->elem10->insertItem(0,ui->elem9->takeItem(0));
                             ui->elem9->insertItem(0,ui->elem8->takeItem(0));
                             ui->elem8->insertItem(0,ui->elem7->takeItem(0));
                             ui->elem7->insertItem(0,ui->elem6->takeItem(0));
                             ui->elem6->insertItem(0,ui->elem5->takeItem(0));
                             ui->elem5->insertItem(0,ui->elem4->takeItem(0));
                             ui->elem4->insertItem(0,text);
                           }else if(pos == 5){
                             ui->elem10->insertItem(0,ui->elem9->takeItem(0));
                             ui->elem9->insertItem(0,ui->elem8->takeItem(0));
                             ui->elem8->insertItem(0,ui->elem7->takeItem(0));
                             ui->elem7->insertItem(0,ui->elem6->takeItem(0));
                             ui->elem6->insertItem(0,ui->elem5->takeItem(0));
                             ui->elem5->insertItem(0,text);
                           }else if(pos == 6){
                             ui->elem10->insertItem(0,ui->elem9->takeItem(0));
                             ui->elem9->insertItem(0,ui->elem8->takeItem(0));
                             ui->elem8->insertItem(0,ui->elem7->takeItem(0));
                             ui->elem7->insertItem(0,ui->elem6->takeItem(0));
                             ui->elem6->insertItem(0,text);
                           }else if(pos == 7){
                             ui->elem10->insertItem(0,ui->elem9->takeItem(0));
                             ui->elem9->insertItem(0,ui->elem8->takeItem(0));
                             ui->elem8->insertItem(0,ui->elem7->takeItem(0));
                             ui->elem7->insertItem(0,text);
                           }else if(pos == 8){
                             ui->elem10->insertItem(0,ui->elem9->takeItem(0));
                             ui->elem9->insertItem(0,ui->elem8->takeItem(0));
                             ui->elem8->insertItem(0,text);
                           }else if(pos == 9){

                             ui->elem10->insertItem(0,ui->elem9->takeItem(0));
                             ui->elem9->insertItem(0,text);
                           }

                    int reTamanho = nLS.getTamanho();
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

void windowLinkedList::on_removeN_clicked()
{
    QString posit = ui->positionRemove->text();
    int pos = posit.toInt();
    int cont = nLS.getTamanho();

    if(nLS.vazia()){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Lista vazia") );

    }else if(ui->positionRemove->text()==NULL){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Nenhuma posição inserida") );
     }else if(pos>nLS.getTamanho()){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Esta posição é maior que a lista") );
     }else if(pos>=1 && pos<=cont-2){

                QString posit = ui->positionRemove->text();
                int pos = posit.toInt();
                nLS.remove(pos);


     if(pos == 9){
                 delete ui->elem9->item(0);
                 ui->elem9->insertItem(0,ui->elem10->takeItem(0));
            }else if(pos == 8){
                    delete ui->elem8->item(0);
                ui->elem8->insertItem(0,ui->elem9->takeItem(0));
                ui->elem9->insertItem(0,ui->elem10->takeItem(0));
            }else if(pos == 7){
                    delete ui->elem7->item(0);
                ui->elem7->insertItem(0,ui->elem8->takeItem(0));
                ui->elem8->insertItem(0,ui->elem9->takeItem(0));
                ui->elem9->insertItem(0,ui->elem10->takeItem(0));

             }else if(pos == 6){
                    delete ui->elem6->item(0);
                ui->elem6->insertItem(0,ui->elem7->takeItem(0));
                ui->elem7->insertItem(0,ui->elem8->takeItem(0));
                ui->elem8->insertItem(0,ui->elem9->takeItem(0));
                ui->elem9->insertItem(0,ui->elem10->takeItem(0));
             }else if(pos == 5){
                    delete ui->elem5->item(0);
                ui->elem5->insertItem(0,ui->elem6->takeItem(0));
                ui->elem6->insertItem(0,ui->elem7->takeItem(0));
                ui->elem7->insertItem(0,ui->elem8->takeItem(0));
                ui->elem8->insertItem(0,ui->elem9->takeItem(0));
                ui->elem9->insertItem(0,ui->elem10->takeItem(0));
             }else if(pos == 4){
                    delete ui->elem4->item(0);
                ui->elem4->insertItem(0,ui->elem5->takeItem(0));
                ui->elem5->insertItem(0,ui->elem6->takeItem(0));
                ui->elem6->insertItem(0,ui->elem7->takeItem(0));
                ui->elem7->insertItem(0,ui->elem8->takeItem(0));
                ui->elem8->insertItem(0,ui->elem9->takeItem(0));
                ui->elem9->insertItem(0,ui->elem10->takeItem(0));
             }else if(pos == 3){
                    delete ui->elem3->item(0);
                ui->elem3->insertItem(0,ui->elem4->takeItem(0));
                ui->elem4->insertItem(0,ui->elem5->takeItem(0));
                ui->elem5->insertItem(0,ui->elem6->takeItem(0));
                ui->elem6->insertItem(0,ui->elem7->takeItem(0));
                ui->elem7->insertItem(0,ui->elem8->takeItem(0));
                ui->elem8->insertItem(0,ui->elem9->takeItem(0));
                ui->elem9->insertItem(0,ui->elem10->takeItem(0));
             }else if(pos == 2){
                    delete ui->elem2->item(0);
                ui->elem2->insertItem(0,ui->elem3->takeItem(0));
                ui->elem3->insertItem(0,ui->elem4->takeItem(0));
                ui->elem4->insertItem(0,ui->elem5->takeItem(0));
                ui->elem5->insertItem(0,ui->elem6->takeItem(0));
                ui->elem6->insertItem(0,ui->elem7->takeItem(0));
                ui->elem7->insertItem(0,ui->elem8->takeItem(0));
                ui->elem8->insertItem(0,ui->elem9->takeItem(0));
                ui->elem9->insertItem(0,ui->elem10->takeItem(0));
               }
                int cont2 = nLS.getTamanho();
                QString contador2 = QVariant(cont2).toString();
                ui->retTamanho->setText(contador2);
            }else{
                QMessageBox::warning(
                            this,
                            tr("ATENÇÃO"),
                            tr("insira um posição do tipo 1...N-2") );
                }

}

void windowLinkedList::on_removeAfter_clicked()
{
    if(nLS.vazia()){
            QMessageBox::warning(
                        this,
                        tr("ATENÇÃO"),
                        tr("Lista vazia") );

        }else{
                int tam = nLS.getTamanho();
            nLS.remove(nLS.getTamanho());

            if(tam == 10){
             delete ui->elem10->item(0);
            }else if(tam == 9){
             delete ui->elem9->item(0);
            }else if(tam == 8){
                delete ui->elem8->item(0);
            }else if(tam == 7){
                delete ui->elem7->item(0);
            }else if(tam == 6){
                delete ui->elem6->item(0);
            }else if(tam == 5){
                delete ui->elem5->item(0);
            }else if(tam == 4){
                delete ui->elem4->item(0);
            }else if(tam == 3){
                delete ui->elem3->item(0);
            }else if(tam == 2){
                delete ui->elem2->item(0);
            }else if(tam == 1){
                delete ui->elem1->item(0);
            }

            QString contador3 = QVariant(nLS.getTamanho()).toString();
            ui->retTamanho->setText(contador3);

        }
}

void windowLinkedList::on_removeFront_clicked()
{
    if(nLS.vazia()){
            QMessageBox::warning(
                        this,
                        tr("ATENÇÃO"),
                        tr("Lista vazia") );

        }else{
            nLS.remove(1);
            delete ui->elem1->item(0);

            ui->elem1->insertItem(0,ui->elem2->takeItem(0));
            ui->elem2->insertItem(0,ui->elem3->takeItem(0));
            ui->elem3->insertItem(0,ui->elem4->takeItem(0));
            ui->elem4->insertItem(0,ui->elem5->takeItem(0));
            ui->elem5->insertItem(0,ui->elem6->takeItem(0));
            ui->elem6->insertItem(0,ui->elem7->takeItem(0));
            ui->elem7->insertItem(0,ui->elem8->takeItem(0));
            ui->elem8->insertItem(0,ui->elem9->takeItem(0));
            ui->elem9->insertItem(0,ui->elem10->takeItem(0));

            int cont4 = nLS.getTamanho();
            QString contador4 = QVariant(cont4).toString();
            ui->retTamanho->setText(contador4);
        }
}
