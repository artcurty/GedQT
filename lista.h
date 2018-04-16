#ifndef LISTA_H
#define LISTA_H
#include "node.h"

class lista
{private:
    Node* cabeca;
    Node* calda;
    int tamanho;
public:
    lista(){
        cabeca = NULL;
        calda = NULL;
        tamanho = 0;
    }


    int Search(int v);
    bool vazia();
    void InsertCabeca(int v);
    void InsertCalda(int v);
    void InsertNp(int v,int i);
    void RemoveFrente();
    void RemoveTras();
    void RemoveNp(int i);
};

#endif // LISTA_H
