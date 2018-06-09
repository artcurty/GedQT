#include "arvore.h"
#include <iostream>
#include <vector>
using namespace std;

//Apresentação dos Projetos: 2ª parte (Árvore Binária de Pesquisa: Inserção, Busca, Encaminhamento In order)
btree::btree(){
    root = NULL;
}

btree::~btree(){
    destroy_tree();
}
bool btree::empty(){
    if(root==NULL){
    return true;
    }else{
        return false;
    }
}
void btree::destroy_tree(node *leaf){
    if(leaf != NULL){
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}

void btree::insert(int key, node *leaf, int *id){
    if(key < leaf->value){
        *id = 2*(*id) + 1; // Atualiza o ID, inserção no filho da esquerda
        if(leaf->left != NULL){
            insert(key, leaf->left, id);
        }else{
            leaf->left = new node;
            leaf->left->value = key;
            leaf->left->left = NULL;
            leaf->left->right = NULL;
        }
    }else if(key >= leaf->value){
        *id = 2*(*id) + 2; // Atualiza o ID, inserção no filho da direita
        if(leaf->right != NULL){
            insert(key, leaf->right, id);
        }else{
            leaf->right = new node;
            leaf->right->value = key;
            leaf->right->right = NULL;
            leaf->right->left = NULL;
        }
    }
 }


int btree::insert(int key){
    int id = 0;

    if(root != NULL){
        insert(key, root, &id); // Envia o endereço da variável id, para alterações futuras.
    }else{

        root = new node;
        root->value = key;
        root->left = NULL;
        root->right = NULL;

    }

    return id; // Retorna o id para ser tratado pela interface.

}

bool btree::search(int num)
{
    node *temp = root;

    while (temp != NULL)
    {
        if (temp->value == num)
            break;

        if (num > temp->value)
            temp = temp->right;
        else                  //  <--- Put this 'else' here
        if (num < temp->value)
            temp = temp->left;
    }

    if (temp == NULL)
        return false;

    if (temp->value == num)
        return true;

    return false;
}


void btree::destroy_tree(){
    destroy_tree(root);
}

string btree::inorder_print(){
    string cord;
    inorder_print(root,&cord);
    return cord;
}

void btree::inorder_print(node *leaf,string *str){
    if(leaf != NULL){
        inorder_print(leaf->left,str);
        (*str) +=std::to_string(leaf->value)+"," ;
        inorder_print(leaf->right,str);
    }
}


