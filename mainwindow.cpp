#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtAlgorithms>
#include "windowfila.h"
#include "windowpilha.h"
#include "windowlista.h"

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



void MainWindow::on_lista_clicked()
{
    windowlista wLista;
    wLista.setModal(true);
    wLista.exec();
}

void MainWindow::on_pilha_clicked()
{
    windowpilha wPilha;
    wPilha.setModal(true);
    wPilha.exec();
}

void MainWindow::on_fila_clicked()
{
    windowfila wFila;
    wFila.setModal(true);
    wFila.exec();
}
