#ifndef ARVORE_H
#define ARVORE_H
#include <iostream>
using namespace std;


struct node{
    int value;
    node *left;
    node *right;
};

class btree{
public:
    btree();
    ~btree();

    int insert(int key);
   // node *search(int key);
    void destroy_tree();
    string inorder_print();
    bool empty();
    bool search(int num);

private:
    void destroy_tree(node *leaf);
    void insert(int key, node *leaf,int *id);
    //node *search(int key, node *leaf);
    void inorder_print(node *leaf,string *str);


    node *root;
};

#endif // ARVORE_H
