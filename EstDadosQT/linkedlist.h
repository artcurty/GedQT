#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#define tamMax 10
using namespace std;

class ListaSeq{
// Vetor que contém os dados da lista
private:
int dados[tamMax];
int tamAtual;
//int tamMax;

public:
    ListaSeq();
    ~ListaSeq();
    bool vazia();
    bool cheia();
    int getTamanho();
    int getElemento(int pos);
    int getPosicao(int dado);
    bool insere(int pos, int dado);
    int remove(int pos);
};
#endif // LINKEDLIST_H
