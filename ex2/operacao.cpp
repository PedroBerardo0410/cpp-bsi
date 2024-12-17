#include <iostream>
#include "operacoes.h"
#include <string>

using namespace std;

void atribui(Jogador &jogador){

    cin.ignore();
    cout << "Informe o nome do jogador: ";
    getline(cin, jogador.nome);

    cout << "Informe a posição do jogador: ";
    getline(cin, jogador.posicao);

    cout << "Informe o número de jogos do jogador: ";
    cin >> jogador.jogos;

    cout << "Informe o número de gols do jogador: ";
    cin >> jogador.gols;
    cout<<endl;
}

void imprime(const Jogador &jogador){
    cout << "Nome: " << jogador.nome << endl;
    cout << "Posição: " << jogador.posicao <<endl;
    cout << "Jogos: "<<jogador.jogos << endl;
    cout << "Gols: "<<jogador.gols<<endl;
    cout<<"-----------------------------\n";
}

int totalGols(Jogador jogadores[], int tamanho){
    int somaGols=0;
    for(int i=0;i<tamanho;i++){
        somaGols+=jogadores[i].gols;
    }
    return somaGols;
}

bool jogadorBom(const Jogador &jogador){
    return jogador.gols > jogador.jogos;
}
