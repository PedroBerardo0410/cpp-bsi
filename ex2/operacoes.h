#ifndef OPERACOES_H_INCLUDED
#define OPERACOES_H_INCLUDED

#include <string>

struct Jogador{
        std::string nome;
        std::string posicao;
        int jogos;
        int gols;
    };


void atribui(Jogador &jogador);
void imprime(const Jogador &jogador);
int totalGols(Jogador jogadores[], int tamanho);
bool jogadorBom(const Jogador &jogador);

#endif // OPERACOES_H_INCLUDED
