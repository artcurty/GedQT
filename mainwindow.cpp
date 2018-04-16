#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pilha.h"
#include "node.h"
#include <QtAlgorithms>
Pilha str;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_OK_clicked()
{   QString ent;
    ent=ui->entrada->text();
    int valor = ent.toInt();
    str.Push(valor);

    int v = str.ListaPilha();
    QString empilha = QVariant(v).toString();
    ui->listWidget->addItem(empilha);

    int cont = str.tamPilha();
    QString contador = QVariant(cont).toString();
    ui->tamanho->setText(contador);

}

void MainWindow::on_pushButton_clicked()
{
        int saida = str.Pop();
        //int cont1 = str.tamPilha();
        //delete ui->listWidget->takeItem(saida); //deleta mas não deleta de uma vez
        //ui->listWidget->item(cont1)->setSelected(true);

        QString popv = QVariant(saida).toString();
        ui->saidapop->setText(popv);

        int cont2 = str.tamPilha();
        QString contador2 = QVariant(cont2).toString();
        ui->tamanho->setText(contador2);

}


void MainWindow::on_listWidget_activated(const QModelIndex &index)
{
   connect(ui->pushButton,SIGNAL(clicked(bool)),ui->listWidget,SLOT()
}
