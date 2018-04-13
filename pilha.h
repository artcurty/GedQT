#ifndef PILHA_H
#define PILHA_H
#include <iostream>
#include <stdio.h>
#include "node.h"

class Pilha
{

        private:
            Node *Cabeca;

        public:
            Pilha()
            {
                Cabeca=NULL;
            }

            bool PilhaVazia();
            void Pop();
            void Push(int);
            int tamPilha();
            int Top();

};

#endif // PILHA_H
