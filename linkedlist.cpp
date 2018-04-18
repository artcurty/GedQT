#include "linkedlist.h"
#include "node.h"

bool linkedlist::vazia(){
 if(cabeca==NULL && cauda==NULL)
        return true;
        else
        return false;
}
int linkedlist::Search(int v){
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
int linkedlist::Tamanho(){
    return tamanho;
}

void linkedlist::InsertCabeca(int v){
     Node *vtx = new Node(v);
        if(vazia()){
            vtx->proximo = cabeca;
            cabeca=vtx;
            cauda=cabeca;
            tamanho++;
        }else{
            vtx->proximo=cabeca;
            cabeca=vtx;
            tamanho++;
        }
}

void linkedlist::InsertCalda(int v){
    Node *vtx = new Node(v);
    if(vazia()){
        vtx->proximo = cabeca;
        cabeca = vtx;
        cauda = cabeca;
        tamanho++;
    }else{
        cauda->proximo = vtx;
        cauda=vtx;
        tamanho++;
    }
}

void linkedlist::InsertNp(int v, int i){
        if(!vazia())
        {
                Node *pre = cabeca;
                for(int k=0;k<i-1;k++){
                    pre = pre->proximo;
                }
                Node *aft = pre->proximo;
                Node *vtx = new Node(v);
                vtx->proximo = aft;
                pre->proximo = vtx;
                tamanho++;

        }
}

void linkedlist::RemoveFrente(){
    if(!vazia()){
        Node *temp = cabeca;
        cabeca = cabeca->proximo;
        delete temp;
        tamanho--;
    }
}

void linkedlist::RemoveTras(){
    if(!vazia())
    {
        Node *pre = cabeca;
        Node *temp = cabeca->proximo;
        if(cabeca==cauda){
            Node *temp=cabeca;
            cabeca = NULL;
            cauda = NULL;
            delete temp;
            tamanho--;
        }
        else{

        while(temp->proximo!=NULL)
        {
            pre = pre->proximo;
            temp = temp->proximo;
        }
            pre->proximo=NULL;
            delete temp;
            cauda = pre;
            tamanho--;
    }
   }
}

void linkedlist::RemoveNp(int i){
     if(!vazia()){
             Node *pre = cabeca;
             for(int k=0;k<i-1;k++)
             {
                 pre = pre->proximo;
             }
             Node *del = pre->proximo;
             Node *aft = del->proximo;
             pre->proximo = aft;
             delete del;
             tamanho--;


    }
}


