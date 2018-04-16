#ifndef FILA_H
#define FILA_H
#include "node.h"
#include <iostream>

class Fila{
    private:
        Node *Inicio;
        Node  *Final;
        int tamanho;
    public:
        Fila()
        {
            Inicio=NULL;
            Final=NULL;
            tamanho=0;
        }

        bool fVazia();
        int Dequeue();
        void Enqueue(int);
        int tamFila();
        int Peek();
        int listaFila();
};

#endif // FILA_H
