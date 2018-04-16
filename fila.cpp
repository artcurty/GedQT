#include "fila.h"
#include <iostream>
#include "node.h"

bool Fila::fVazia(){
    if(tamanho==0)
    return true;
    else
    return false;

}
/*
int Fila::tamFila()
{
    int tam = 0;
    if(Inicio!=0)
    {
        Node *p;
        for(p=Inicio;p!=0;p=p->proximo){
            tam++;
        }
        return (tam);
    }
} */
void Fila::Push_back(int info){

    if(fVazia()){
        Inicio = Final = new Node(info);
    } else{
            Final->proximo = new Node(info);
            Final = Final->proximo;
            tamanho++;
        }

}


int Fila::PopFront() //imprime o número da frente e depois apaga
{
    if(!fVazia())
    {
        int info=Inicio->info;
        Node *tmp = Inicio;
        Inicio = Inicio->proximo;
        delete tmp;
        tamanho--;
    }

}
/*
    int Fila::Back () //imprime o número de trás e depois apaga
    {   if(!fVazia())
        {
            int info = Final->info;
            Node *tmp = Final;
            Final = Final->proximo;
            delete tmp;
            tamanho--;
        }

    }

void Fila::Reverse() //reverte todos os elementos da fila
{
    int v = tamanho;
    for(int i=1;i<v;i++) //utiliza o tamanho da fila enquanto contador for menor que o tamanho, então i++
    {
            int info = Inicio->info;
            Node *tmp = Inicio;
            Inicio = Inicio->proximo;
            delete tmp;
            Push_back(info);
            //tira o da frente e joga pro final
    }
}*/

void Fila::toFront(int f) // Coloca um numero na frente "Preferencial"
    {
        if(fVazia()){
        Inicio = Final = new Node(f);
        }else{

        Node *tmp = new Node(f);
        tmp->proximo=Inicio;
        Inicio=tmp;
        }
        tamanho++;

    }
