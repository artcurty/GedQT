#include "lista.h"
#include "node.h"
#include <iostream>

bool lista::vazia()
{ if(cabeca==NULL && cauda==NULL)
    return true;
    else
    return false;
}

int lista::Tamanho(){
    return tamanho;
}

int lista::Search(int v)
{
    if(!vazia()){
        int index = 0;
        Node *temp = cabeca;

        while(temp->info!=v)
        {   index++;
            temp = temp->proximo;

            if(temp==NULL){
              return -1;
            }
        }
        return index;
     }
}

void lista::InsertCabeca(int v){

     Node* NovoNo=new Node(v);
     int teste = Search(v);

    if(v!=teste)
    {
         if(tamanho<=10)
         {
               if(vazia())
               {    cabeca=NovoNo;
                   NovoNo->anterior=NULL;
                   NovoNo->proximo=NULL;
                   cauda=NovoNo;
                   tamanho++;
                   return;
               }else{
                   NovoNo->proximo=cabeca;
                   NovoNo->anterior=NULL;
                   cabeca->anterior=NovoNo;
                   cabeca=NovoNo;
                   tamanho++;
               }
        }
   }
 }

void lista::InsertCalda(int v){
    Node *NovoNo = new Node(v);
    int teste = Search(v);
 if(v!=teste)
 {
     if(tamanho <= 10)
        {
        if(vazia()){
            cabeca=NovoNo;
            NovoNo->anterior=NULL;
            NovoNo->proximo=NULL;
            cauda=NovoNo;
            tamanho++;
            return;
         }else{
            NovoNo->anterior=cauda;
            cauda->proximo=NovoNo;
            NovoNo->proximo=NULL;
            cauda=NovoNo;
            tamanho++;
           }
         }
   }
 }
 void lista::InsertNp(int v, int i){

     if(!vazia()){


             Node *pre=cabeca;

             for(int k=0;k < i-1; k++)
             {
                 pre=pre->proximo;
             }
             Node *aft = pre->proximo;
             Node *vtx = new Node(v);

             vtx->proximo = aft;
             aft->anterior = vtx;
             pre->proximo = vtx;
             vtx->anterior = pre;
             tamanho++;

    }
 }
 void lista::RemoveFrente(){
     if(!vazia()){
         Node* temp=cabeca;
         cabeca=cabeca->proximo;
         delete temp;
         if(cabeca!=NULL){
            cabeca->anterior=NULL;
         }
     tamanho--;
     }
 }
void lista:: RemoveTras(){
    if(!vazia())
    {
        if(cabeca==cauda){
            Node *temp=cabeca;
            cabeca = NULL;
            cauda = NULL;
            delete temp;
            tamanho--;
        }
        else{
            Node *temp=cauda;
            cauda=cauda->anterior;
            cauda->proximo=NULL;
            delete temp;
            tamanho--;
        }
    }

}

void lista::RemoveNp(int i){
    if(!vazia()){

            Node* pre=cabeca;

            for(int k=0;k<i-1;k++)
            {
                pre=pre->proximo;
            }

            Node *del = pre->proximo;
            Node *aft = del->proximo;
            pre->proximo=aft;
            aft->anterior=pre;
            delete del;

            tamanho--;

    }
}
