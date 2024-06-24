#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int ouro , prata, bronze , total;
    fstream arq;

    arq.open("Medalhas.txt", ios :: out | ios :: app);

    cout << "Digite o numero de medalhas de ouro quee o brasil ganhou nas olimpiadas: " << endl;
    cin >> ouro;
     cout << "Digite o numero de medalhas de prata que o brasil ganhou nas olimpiadas: " << endl;
     cin >> prata;
     cout << "Digite o numero de medalhas de bronze que o brasil ganhou nas olimpiadas: " << endl;
     cin >> bronze;
     total = (ouro + prata + bronze);
     cout << endl << "O Brasil ganhou " << total << " medalhas nas olimpiadas.";
     arq << endl << "O Brasil ganhou " << total << " medalhas nas olimpiadas.";

     if(!arq.is_open()){
        cout << "ERRO AO ABRIR ARQUIVO.";
     }
     arq.close();




    return 0;
}
