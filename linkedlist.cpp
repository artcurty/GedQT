#include "linkedlist.h"
#include <iostream>
#define NULL 0


ListaSeq::ListaSeq(){
    //construtor

    int *dados= new int[tamMax];
    tamAtual=0;
}

ListaSeq::~ListaSeq(){
    //destrutor
}



// Definição das Operações
/** Verifica se a Lista está vazia */
bool ListaSeq::vazia(){
if (tamAtual == 0 ){
    cout<<"vazia"<<endl;
    return true;}
else return false;
}


/**Verifica se a Lista está cheia */
bool ListaSeq::cheia(){
if (tamAtual == tamMax){
    cout<<"lista cheia"<<endl;
    return true;}
else
return false;
}

/**Obtém o tamanho da Lista*/
int ListaSeq::getTamanho(){
    cout<<tamAtual<<endl;
return tamAtual;
}

/** Obtém o i-ésimo elemento de uma lista.
Retorna -1 se a posição for inválida. */
int ListaSeq::getElemento(int pos){
int dado;
/* Se posição estiver fora dos limites
<= 0 ou > tamanho da lista */
if ((pos > tamAtual) || (pos <= 0))
return -1;
dado = dados[pos-1];
cout<<dado<<endl;
return dado;
}

/**Retorna a posição de um elemento pesquisado.
Retorna -1 caso não seja encontrado */
int ListaSeq::getPosicao (int dado){
/* Procura elemento a elemento.
Se estiver, retorna posição no array+1 */
for (int i = 0; i < tamAtual; i++){
if (dados[i] == dado){
        cout<<i+1<<endl;
return (i + 1);
}
}
cout<<"n achou"<<endl;
return -1;
}

/**Insere um elemento em uma determinada posição.
Retorna true se a insercao funcionar e
false caso contrário. */
bool ListaSeq::insere (int pos, int dado){
if (cheia() || (pos > tamAtual+1) || (pos<=0)){
return false;
}
for (int i = tamAtual; i >= pos; i--){
dados[i] = dados[i-1];
}
dados[pos - 1] = dado;
tamAtual++;
return true;
}

/** Remove um elemento de uma determinada posição
Retorna o valor do elemento removido e
-1 caso a remoção falhe */
int ListaSeq::remove(int pos){
int dado;
if ((pos > tamAtual) || (pos < 1 ))
return -1;
dado = dados[pos-1];
for (int i = pos - 1; i < tamAtual - 1; i++){
dados[i] = dados[i+1];
}
tamAtual--;
cout<<"elemento removido: "<<dado<<endl;
return dado;

}
