#ifndef LISTA_H
#define LISTA_H
#include "node.h"

class lista
{private:
    Node* cabeca;
    Node* cauda;
    int tamanho;
public:
    lista(){
        cabeca = NULL;
        cauda = NULL;
        tamanho = 0;
    }


    int Search(int );
    bool vazia();
    void InsertCabeca(int );
    void InsertCalda(int );
    void InsertNp(int ,int );
    void RemoveFrente();
    void RemoveTras();
    void RemoveNp(int );
    int Tamanho();
};

#endif // LISTA_H
