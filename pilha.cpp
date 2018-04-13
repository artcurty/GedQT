#include "pilha.h"
#include "node.h"
#include <iostream>
#include <stdio.h>

int Pilha::Top()
{
    if(!PilhaVazia()){
    return Cabeca->info;
    }
}

bool Pilha::PilhaVazia()
{

        return (Cabeca==NULL);

}
void Pilha::Push(int v){
      if(PilhaVazia()){
        Node *novo = new Node(v);
        novo->proximo=Cabeca;
        Cabeca=novo;
        }else{

        Node *tmp = new Node(v);
        tmp->proximo=Cabeca;
        Cabeca=tmp;
        }
}
int Pilha::Pop(){
    if(PilhaVazia()!=true)
    {
        int v = Cabeca->info;
        Node *tmp = Cabeca;
        Cabeca = Cabeca->proximo;
        return v;
        delete tmp;
    }
}
