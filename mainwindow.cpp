#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pilha.h"
#include "node.h"
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
}

void MainWindow::on_pushButton_clicked()
{   int saida = str.Pop();
    QString popv = QVariant(saida).toString();
    ui->saidapop->setText(popv);
}
