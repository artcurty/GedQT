#ifndef NO_ARVORE_H
#define NO_ARVORE_H
#include <iostream>

class No
{
public:

    No *esq;
    No *dir;
    int chave;


    No(int nchave, No* nesq=NULL,No* ndir=NULL){
        chave = nchave;
        esq = nesq;
        dir = ndir;

    }
};
#endif // NO_ARVORE_H
