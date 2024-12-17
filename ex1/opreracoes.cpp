#include <iostream>
#include "opreracoes.h"
#define MAX 5

using namespace std;

Lista* criarLista(){
    Lista *lista = new Lista;
    if(!lista){
        cout << "ERRO DE ALOCACAO.";
        exit(1);
    }
    lista ->qtd=0;
    return lista;
}

void apagarLista(Lista *lista){
    delete lista;
}

int listaEhCheia(Lista *lista){
    return (lista->qtd==MAX);
}
int listaEhVazia(Lista *lista){
    return (lista->qtd==0);
}



