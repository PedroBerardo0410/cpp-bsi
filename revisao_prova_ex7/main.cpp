#include <iostream>
#include <string>
#define QUANTIDADE 2

using namespace std;

struct Aluno {
        string nome;
        string matricula;
        string curso;
        int anoingresso;
    };


void receber(Aluno* aluno);
void exibir(Aluno* aluno);

int main()
{

    Aluno* aluno = new Aluno[QUANTIDADE];
    receber(aluno);
    exibir(aluno);

    return 0;
}

void receber(Aluno* aluno){
    for(int i=0;i<QUANTIDADE;i++){
        cout << "Aluno "<< i+1 << endl;
        cout << "Informe o nome: ";
        getline(cin, aluno[i].nome);
        cout << "Informe a matricula: ";
        getline(cin,aluno[i].matricula);
        cout << "Informe o curso: ";
        getline(cin, aluno[i].curso);

        do{
            cout << "Informe o ano de ingresso: ";
            cin >> aluno[i].anoingresso;
        }while(aluno[i].anoingresso > 2024);

        cin.ignore();
    }
}

void exibir(Aluno* aluno){
    cout << "====================\n";

    for(int i=0;i<QUANTIDADE;i++){
        cout << "Aluno "<< i+1<<endl;
        cout << "Nome: " << aluno[i].nome<<endl;
        cout << "Matricula: " <<aluno[i].matricula<<endl;
        cout << "Curso: "<<aluno[i].curso<<endl;
        cout << "Ano de ingresso: " << aluno[i].anoingresso<<endl;
    }
}
