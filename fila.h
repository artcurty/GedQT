#ifndef FILA_H
#define FILA_H
#include "node.h"
#include <iostream>

class Fila{
    private:
        Node *Inicio, *Final;
        int tamanho;
    public:
        Fila()
        {
            Inicio=Final=NULL;
            tamanho=0;
        }

        bool fVazia();
        int PopFront();
        int Back();
        void Reverse();
        void toFront(int);
        void Push_back(int);
       // int tamFila();

};

#endif // FILA_H
