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

        if(localizacao == 0){
            ui->no1->item(0)->setSelected(true);
            ui->no2->item(0)->setSelected(false);
            ui->no3->item(0)->setSelected(false);
            ui->no4->item(0)->setSelected(false);
            ui->no5->item(0)->setSelected(false);
            ui->no6->item(0)->setSelected(false);
            ui->no7->item(0)->setSelected(false);
            ui->no8->item(0)->setSelected(false);
            ui->no9->item(0)->setSelected(false);
            ui->no10->item(0)->setSelected(false);

        }else if(localizacao == 1 ){
            ui->no1->item(0)->setSelected(false);
            ui->no2->item(0)->setSelected(true);
            ui->no3->item(0)->setSelected(false);
            ui->no4->item(0)->setSelected(false);
            ui->no5->item(0)->setSelected(false);
            ui->no6->item(0)->setSelected(false);
            ui->no7->item(0)->setSelected(false);
            ui->no8->item(0)->setSelected(false);
            ui->no9->item(0)->setSelected(false);
            ui->no10->item(0)->setSelected(false);

        }else if(localizacao == 2 ){
            ui->no1->item(0)->setSelected(false);
            ui->no2->item(0)->setSelected(false);
            ui->no3->item(0)->setSelected(true);
            ui->no4->item(0)->setSelected(false);
            ui->no5->item(0)->setSelected(false);
            ui->no6->item(0)->setSelected(false);
            ui->no7->item(0)->setSelected(false);
            ui->no8->item(0)->setSelected(false);
            ui->no9->item(0)->setSelected(false);
            ui->no10->item(0)->setSelected(false);

        }else if(localizacao == 3 ){
            ui->no1->item(0)->setSelected(false);
            ui->no2->item(0)->setSelected(false);
            ui->no3->item(0)->setSelected(false);
            ui->no4->item(0)->setSelected(true);
            ui->no5->item(0)->setSelected(false);
            ui->no6->item(0)->setSelected(false);
            ui->no7->item(0)->setSelected(false);
            ui->no8->item(0)->setSelected(false);
            ui->no9->item(0)->setSelected(false);
            ui->no10->item(0)->setSelected(false);

        }else if(localizacao == 4 ){
            ui->no1->item(0)->setSelected(false);
            ui->no2->item(0)->setSelected(false);
            ui->no3->item(0)->setSelected(false);
            ui->no4->item(0)->setSelected(false);
            ui->no5->item(0)->setSelected(true);
            ui->no6->item(0)->setSelected(false);
            ui->no7->item(0)->setSelected(false);
            ui->no8->item(0)->setSelected(false);
            ui->no9->item(0)->setSelected(false);
            ui->no10->item(0)->setSelected(false);

        }else if(localizacao == 5 ){
            ui->no1->item(0)->setSelected(false);
            ui->no2->item(0)->setSelected(false);
            ui->no3->item(0)->setSelected(false);
            ui->no4->item(0)->setSelected(false);
            ui->no5->item(0)->setSelected(false);
            ui->no6->item(0)->setSelected(true);
            ui->no7->item(0)->setSelected(false);
            ui->no8->item(0)->setSelected(false);
            ui->no9->item(0)->setSelected(false);
            ui->no10->item(0)->setSelected(false);

        }else if(localizacao == 6 ){
            ui->no1->item(0)->setSelected(false);
            ui->no2->item(0)->setSelected(false);
            ui->no3->item(0)->setSelected(false);
            ui->no4->item(0)->setSelected(false);
            ui->no5->item(0)->setSelected(false);
            ui->no6->item(0)->setSelected(false);
            ui->no7->item(0)->setSelected(true);
            ui->no8->item(0)->setSelected(false);
            ui->no9->item(0)->setSelected(false);
            ui->no10->item(0)->setSelected(false);

        }else if(localizacao == 7 ){
            ui->no1->item(0)->setSelected(false);
            ui->no2->item(0)->setSelected(false);
            ui->no3->item(0)->setSelected(false);
            ui->no4->item(0)->setSelected(false);
            ui->no5->item(0)->setSelected(false);
            ui->no6->item(0)->setSelected(false);
            ui->no7->item(0)->setSelected(false);
            ui->no8->item(0)->setSelected(true);
            ui->no9->item(0)->setSelected(false);
            ui->no10->item(0)->setSelected(false);
        }else if(localizacao == 8 ){
            ui->no1->item(0)->setSelected(false);
            ui->no2->item(0)->setSelected(false);
            ui->no3->item(0)->setSelected(false);
            ui->no4->item(0)->setSelected(false);
            ui->no5->item(0)->setSelected(false);
            ui->no6->item(0)->setSelected(false);
            ui->no7->item(0)->setSelected(false);
            ui->no8->item(0)->setSelected(false);
            ui->no9->item(0)->setSelected(true);
            ui->no10->item(0)->setSelected(false);
        }else if(localizacao == 9 ){
            ui->no1->item(0)->setSelected(false);
            ui->no2->item(0)->setSelected(false);
            ui->no3->item(0)->setSelected(false);
            ui->no4->item(0)->setSelected(false);
            ui->no5->item(0)->setSelected(false);
            ui->no6->item(0)->setSelected(false);
            ui->no7->item(0)->setSelected(false);
            ui->no8->item(0)->setSelected(false);
            ui->no9->item(0)->setSelected(false);
            ui->no10->item(0)->setSelected(true);
        }
        else if(ui->entrada->text()==NULL){
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
    }else if(nLista.Tamanho()==10){

                QMessageBox::warning(
                            this,
                            tr("ATENÇÃO"),
                            tr("Lista cheia") );


    }else{
        QString entrada = ui->entrada->text();
        int valor = entrada.toInt();
        nLista.InsertCabeca(valor);
        int loc = nLista.Search(valor);

           ui->no10->insertItem(0,ui->no9->takeItem(0));
           ui->no9->insertItem(0,ui->no8->takeItem(0));
           ui->no8->insertItem(0,ui->no7->takeItem(0));
           ui->no7->insertItem(0,ui->no6->takeItem(0));
           ui->no6->insertItem(0,ui->no5->takeItem(0));
           ui->no5->insertItem(0,ui->no4->takeItem(0));
           ui->no4->insertItem(0,ui->no3->takeItem(0));
           ui->no3->insertItem(0,ui->no2->takeItem(0));
           ui->no2->insertItem(0,ui->no1->takeItem(0));


         ui->no1->insertItem(loc,entrada); //inserindo um elemento no primeiro nó (frente)


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
    }else if(nLista.Tamanho()==10){

        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Lista cheia") );

    }
    else{
        QString entrada = ui->entrada->text();
        int valor = entrada.toInt();
        nLista.InsertCalda(valor);

        int locnaList = nLista.Search(valor);

        if(locnaList == 0){
            ui->no1->insertItem(0,entrada);
        }else if(locnaList == 1){
            ui->no2->insertItem(0,entrada);
        }else if(locnaList == 2){
            ui->no3->insertItem(0,entrada);
        }else if(locnaList == 3){
            ui->no4->insertItem(0,entrada);
        }else if(locnaList == 4){
            ui->no5->insertItem(0,entrada);
        }else if(locnaList == 5){
            ui->no6->insertItem(0,entrada);
        }else if(locnaList == 6){
            ui->no7->insertItem(0,entrada);
        }else if(locnaList == 7){
            ui->no8->insertItem(0,entrada);
        }else if(locnaList == 8){
            ui->no9->insertItem(0,entrada);
        }else if(locnaList == 9){
            ui->no10->insertItem(0,entrada);
        }
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
                    int pos = nLista.Search(v2);
                         if(pos == 1){
                              ui->no10->insertItem(0,ui->no9->takeItem(0));
                              ui->no9->insertItem(0,ui->no8->takeItem(0));
                              ui->no8->insertItem(0,ui->no7->takeItem(0));
                              ui->no7->insertItem(0,ui->no6->takeItem(0));
                              ui->no6->insertItem(0,ui->no5->takeItem(0));
                              ui->no5->insertItem(0,ui->no4->takeItem(0));
                              ui->no4->insertItem(0,ui->no3->takeItem(0));
                              ui->no3->insertItem(0,ui->no2->takeItem(0));
                              ui->no2->insertItem(0,text);
                           }else if(pos == 2){
                              ui->no10->insertItem(0,ui->no9->takeItem(0));
                              ui->no9->insertItem(0,ui->no8->takeItem(0));
                              ui->no8->insertItem(0,ui->no7->takeItem(0));
                              ui->no7->insertItem(0,ui->no6->takeItem(0));
                              ui->no6->insertItem(0,ui->no5->takeItem(0));
                              ui->no5->insertItem(0,ui->no4->takeItem(0));
                              ui->no4->insertItem(0,ui->no3->takeItem(0));
                              ui->no3->insertItem(0,text);
                           }else if(pos == 3){
                             ui->no10->insertItem(0,ui->no9->takeItem(0));
                             ui->no9->insertItem(0,ui->no8->takeItem(0));
                             ui->no8->insertItem(0,ui->no7->takeItem(0));
                             ui->no7->insertItem(0,ui->no6->takeItem(0));
                             ui->no6->insertItem(0,ui->no5->takeItem(0));
                             ui->no5->insertItem(0,ui->no4->takeItem(0));
                             ui->no4->insertItem(0,text);
                           }else if(pos == 4){
                             ui->no10->insertItem(0,ui->no9->takeItem(0));
                             ui->no9->insertItem(0,ui->no8->takeItem(0));
                             ui->no8->insertItem(0,ui->no7->takeItem(0));
                             ui->no7->insertItem(0,ui->no6->takeItem(0));
                             ui->no6->insertItem(0,ui->no5->takeItem(0));
                             ui->no5->insertItem(0,text);
                           }else if(pos == 5){
                             ui->no10->insertItem(0,ui->no9->takeItem(0));
                             ui->no9->insertItem(0,ui->no8->takeItem(0));
                             ui->no8->insertItem(0,ui->no7->takeItem(0));
                             ui->no7->insertItem(0,ui->no6->takeItem(0));
                             ui->no6->insertItem(0,text);
                           }else if(pos == 6){
                             ui->no10->insertItem(0,ui->no9->takeItem(0));
                             ui->no9->insertItem(0,ui->no8->takeItem(0));
                             ui->no8->insertItem(0,ui->no7->takeItem(0));
                             ui->no7->insertItem(0,text);
                           }else if(pos == 7){
                             ui->no10->insertItem(0,ui->no9->takeItem(0));
                             ui->no9->insertItem(0,ui->no8->takeItem(0));
                             ui->no8->insertItem(0,text);
                           }else if(pos == 8){

                             ui->no10->insertItem(0,ui->no9->takeItem(0));
                             ui->no9->insertItem(0,text);
                           }

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
     }else if(pos>=1 && pos<=cont-2){

                QString posit = ui->positionRemove->text();
                int pos = posit.toInt();
                nLista.RemoveNp(pos);


     if(pos == 8){
                 delete ui->no9->item(0);
                 ui->no9->insertItem(0,ui->no10->takeItem(0));
            }else if(pos == 7){
                    delete ui->no8->item(0);
                ui->no8->insertItem(0,ui->no9->takeItem(0));
                ui->no9->insertItem(0,ui->no10->takeItem(0));
            }else if(pos == 6){
                    delete ui->no7->item(0);
                ui->no7->insertItem(0,ui->no8->takeItem(0));
                ui->no8->insertItem(0,ui->no9->takeItem(0));
                ui->no9->insertItem(0,ui->no10->takeItem(0));

             }else if(pos == 5){
                    delete ui->no6->item(0);
                ui->no6->insertItem(0,ui->no7->takeItem(0));
                ui->no7->insertItem(0,ui->no8->takeItem(0));
                ui->no8->insertItem(0,ui->no9->takeItem(0));
                ui->no9->insertItem(0,ui->no10->takeItem(0));
             }else if(pos == 4){
                    delete ui->no5->item(0);
                ui->no5->insertItem(0,ui->no6->takeItem(0));
                ui->no6->insertItem(0,ui->no7->takeItem(0));
                ui->no7->insertItem(0,ui->no8->takeItem(0));
                ui->no8->insertItem(0,ui->no9->takeItem(0));
                ui->no9->insertItem(0,ui->no10->takeItem(0));
             }else if(pos == 3){
                    delete ui->no4->item(0);
                ui->no4->insertItem(0,ui->no5->takeItem(0));
                ui->no5->insertItem(0,ui->no6->takeItem(0));
                ui->no6->insertItem(0,ui->no7->takeItem(0));
                ui->no7->insertItem(0,ui->no8->takeItem(0));
                ui->no8->insertItem(0,ui->no9->takeItem(0));
                ui->no9->insertItem(0,ui->no10->takeItem(0));
             }else if(pos == 2){
                    delete ui->no3->item(0);
                ui->no3->insertItem(0,ui->no4->takeItem(0));
                ui->no4->insertItem(0,ui->no5->takeItem(0));
                ui->no5->insertItem(0,ui->no6->takeItem(0));
                ui->no6->insertItem(0,ui->no7->takeItem(0));
                ui->no7->insertItem(0,ui->no8->takeItem(0));
                ui->no8->insertItem(0,ui->no9->takeItem(0));
                ui->no9->insertItem(0,ui->no10->takeItem(0));
             }else if(pos == 1){
                    delete ui->no2->item(0);
                ui->no2->insertItem(0,ui->no3->takeItem(0));
                ui->no3->insertItem(0,ui->no4->takeItem(0));
                ui->no4->insertItem(0,ui->no5->takeItem(0));
                ui->no5->insertItem(0,ui->no6->takeItem(0));
                ui->no6->insertItem(0,ui->no7->takeItem(0));
                ui->no7->insertItem(0,ui->no8->takeItem(0));
                ui->no8->insertItem(0,ui->no9->takeItem(0));
                ui->no9->insertItem(0,ui->no10->takeItem(0));
               }
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



void windowlista::on_removeAfter_clicked()
{  if(nLista.vazia()){
        QMessageBox::warning(
                    this,
                    tr("ATENÇÃO"),
                    tr("Lista vazia") );

    }else{
        nLista.RemoveTras();
        int tam = nLista.Tamanho();

        if(tam == 9){
         delete ui->no10->item(0);
        }else if(tam == 8){
         delete ui->no9->item(0);
        }else if(tam == 7){
            delete ui->no8->item(0);
        }else if(tam == 6){
            delete ui->no7->item(0);
        }else if(tam == 5){
            delete ui->no6->item(0);
        }else if(tam == 4){
            delete ui->no5->item(0);
        }else if(tam == 3){
            delete ui->no4->item(0);
        }else if(tam == 2){
            delete ui->no3->item(0);
        }else if(tam == 1){
            delete ui->no2->item(0);
        }else if(tam == 0){
            delete ui->no1->item(0);
        }

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
        delete ui->no1->item(0);

        ui->no1->insertItem(0,ui->no2->takeItem(0));
        ui->no2->insertItem(0,ui->no3->takeItem(0));
        ui->no3->insertItem(0,ui->no4->takeItem(0));
        ui->no4->insertItem(0,ui->no5->takeItem(0));
        ui->no5->insertItem(0,ui->no6->takeItem(0));
        ui->no6->insertItem(0,ui->no7->takeItem(0));
        ui->no7->insertItem(0,ui->no8->takeItem(0));
        ui->no8->insertItem(0,ui->no9->takeItem(0));
        ui->no9->insertItem(0,ui->no10->takeItem(0));

        int cont4 = nLista.Tamanho();
        QString contador4 = QVariant(cont4).toString();
        ui->retTamanho->setText(contador4);
    }
}
