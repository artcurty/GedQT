#ifndef NODE
#define NODE
#include <iostream>
#include <stdio.h>
class Node{
    public:
    int info;
    Node *proximo;
    Node()
    {
        proximo=NULL;
    }
    Node(int nInfo, Node* nProximo=NULL){

        info=nInfo;
        proximo=nProximo;
    }

};
#endif // NODE

