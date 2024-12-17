#include <iostream>
#include "operacoes.h"
#include <string>

using namespace std;

int main()
{
    Jogador jogadores[10];

    cout << "Insira as informa��es dos 10 jogadores: \n";
    for(int i=0;i<10;i++){
        cout << "Jogador "<<i+1<<":\n";
        atribui(jogadores[i]);
    }
    cout << "\nDados dos jogadores:\n";
    for(int i=0;i<10;i++){
        imprime(jogadores[i]);
    }

    cout << "Total de gols de todos os jogadores: " << totalGols(jogadores, 10)<<endl;

    cout << "\nVerifica��o dos jogadores bons: \n";
    for(int i=0;i<10;i++){
        if(jogadorBom(jogadores[i])){
            cout << jogadores [i].nome << " � um bom jogador!\n";
        }else{
            cout << jogadores[i].nome << " n�o tem mais gols do que partidas.\n";
        }
    }
    return 0;
}
