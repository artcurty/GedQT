#ifndef PILHA_H
#define PILHA_H
#include <iostream>
#include <stdio.h>
#include "node.h"

class Pilha
{

        private:
            Node *Cabeca;
            int tamanho;
        public:
            Pilha()
            {
                Cabeca=NULL;
                tamanho=0;
            }

            bool PilhaVazia();
            int Pop();
            void Push(int);
            int tamPilha();
            int Top();
            int ListaPilha();

};

#endif // PILHA_H
