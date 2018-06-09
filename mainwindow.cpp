#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtAlgorithms>
#include "windowfila.h"
#include "windowpilha.h"
#include "windowlista.h"
#include "windowlinkedlist.h"
#include "windowarvore.h"

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

void MainWindow::on_pushButton_clicked()
{
    windowLinkedList wlistaS;
    wlistaS.setModal(true);
    wlistaS.exec();
}

void MainWindow::on_fila_2_clicked()
{
    windowarvore warvore;
    warvore.setModal(true);
    warvore.exec();
}
