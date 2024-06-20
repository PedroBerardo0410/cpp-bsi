#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int nelemento;
    cout << "Informe o numero de elementos:   ";
    cin >> nelemento;

    struct EstruturaAluno{
        char nome[60];
        char matricula[10];
        int anoIngresso;
        int idade;
        char genero[20];

        int numerotele;

        }strAluno[nelemento];

        int i;

        for (i=0;i<nelemento;i++){
            cout << "Informe o nome do aluno:    ";
            cin >> strAluno[i].nome;
            cout << "Informe a matricula do aluno:    ";
            cin >>strAluno[i].matricula;
            cout << "Informe o ano de ingresso do aluno:    ";
            cin >> strAluno[i].anoIngresso;
            cout << "Informe a idade do aluno:   ";
            cin >> strAluno[i].idade;
            cout << "Informe o genero do aluno:   ";
            cin >> strAluno[i].genero;
            cout << "Informe o numero de contato do aluno:   ";
            cin >> strAluno[i].numerotele;
            cout << endl;
            fflush(stdin);
        }
        cout << "\nAlunos cadastrados com sucesso!\n\n";
        for(i=0;i<nelemento;i++){
            cout << "Aluno: " << strAluno[i].nome << endl;
            cout << "Matricula: " << strAluno[i].matricula << endl;
            cout << "Ano de ingresso: " << strAluno[i].anoIngresso << endl;
            cout << "Idade: " << strAluno[i].idade << endl;
            cout << "Genero: " << strAluno[i].genero << endl;
            cout << "Numero de contato: " << strAluno[i].numerotele << endl << "\n";
        }
    return 0;
}
