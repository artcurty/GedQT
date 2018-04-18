#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"

class linkedlist
{private:
    Node* cabeca;
    Node* cauda;
    int tamanho;
public:
    linkedlist(){
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

#endif // LINKEDLIST_H
