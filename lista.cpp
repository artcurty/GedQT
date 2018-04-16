#include "lista.h"
#include "node.h"
#include <iostream>

bool lista::vazia()
{ if(cabeca==NULL && calda==NULL)
    return true;
    else
    return false;
}

int lista::Search(int v)
{   if(!vazia()){
        int index = 0;
        Node* temp = cabeca;
        while(temp->info!=v)
        {
            index++;
            temp=temp->proximo;
            if(temp=NULL){
                return -1;
            }
        }
        return index;
        }
}

void lista::InsertCabeca(int v){
    if(vazia()){
    Node *vtx = new Node(v);
    cabeca = vtx;
    calda = vtx;
    }
    else{

    Node *temp = new Node(v);
    temp->proximo;
    cabeca=temp;
    }
}

void lista::InsertCalda(int v){
    Node *vtx = new Node(v);
    Node *temp;
    calda->proximo=temp;
    temp->anterior=calda;
    calda=vtx;

}
 void lista::InsertNp(int v, int i){
     Node *pre=cabeca;

     //i = psoicao que  carinha vai inserir
     for(int k=0;k<i-1;k++){
         pre=pre->proximo;
     }
     Node *aft=pre->proximo;
     Node *vtx= new Node(v);
     vtx->proximo = aft;
     aft->anterior=vtx;
     pre->proximo=vtx;
     vtx->anterior=pre;

 }
 void lista::RemoveFrente(){
     if(!vazia()){
         Node* temp=cabeca;
         cabeca=cabeca->proximo;
         delete temp;
         if(cabeca!=NULL){
            cabeca->anterior=NULL;
         }

     }
 }
void lista:: RemoveTras(){
    if(!vazia()){
     Node* temp=calda;
     calda=calda->proximo;
     calda->proximo=NULL;
     delete temp;
    }
}

void lista::RemoveNp(int i){
    if(!vazia()){
     Node* pre=cabeca;
     for(int k=0;k<i-1;k++){
         pre=pre->proximo;
     }
     Node *del=pre->proximo;
     Node *aft=del->proximo;
     pre->proximo=aft;
     aft->anterior=pre;
     delete del;
    }
}
