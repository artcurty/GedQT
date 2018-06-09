#include "fila.h"
#include "node.h"
#include <QtAlgorithms>

bool Fila::fVazia(){
    return Inicio==NULL;
}
int Fila::tamFila(){
    return tamanho;
}
int Fila::Peek(){

    if(!fVazia()){
     return Inicio->info;
        }
}
void Fila::Enqueue(int v){

    if(fVazia())
    {    Node *vtx = new Node(v);
         vtx->proximo=Inicio;
         Inicio=vtx;
         Final=Inicio;
         tamanho++;
     } else
        {
            Node *novo = new Node(v);
            Final->proximo = novo;
            Final = novo;
            tamanho++;
         }

}
int Fila::Dequeue() //imprime o número da frente e depois apaga
{
    if(!fVazia())
    {
        int valor = Inicio->info;
        Node *tmp = Inicio;
        Inicio = Inicio->proximo;
        tamanho--;
        delete tmp;
        return valor;
    }
}
int Fila::listaFila(){
    while(!fVazia()){
        int v=Inicio->info;
        return v;
        Inicio = Inicio->proximo;
    }
}
