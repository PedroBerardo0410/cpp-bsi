#ifndef OPRERACOES_H_INCLUDED
#define OPRERACOES_H_INCLUDED
#define MAX 5

struct ALUNO{
    char nome[100];
    int matricula;
    float n1;
};

struct LISTA{
    int qtd;
    ALUNO aluno[MAX];
};

typedef struct ALUNO Aluno;
typedef struct LISTA Lista;

Lista* criarLista();
void apagarLista(Lista *lista);
int listaEhCheia(Lista *lista);


#endif // OPRERACOES_H_INCLUDED
