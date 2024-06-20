#include <iostream>
#include <cstdlib>
#include <locale>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int mo, mp, mb, soma;

    cout << "Digite o Número de medalhas de Ouro que o Brasil ganhou nas Olimpíadas: \n";
    cin >> mo;
    cout << "Digite o Número de medalhas de Prata que o Brasil ganhou nas Olimpíadas:  \n";
    cin >> mp;
    cout << "Digite o Número de  medalhas de Bronze que o Brasil ganhou nas Olimpíadas:  \n";
    cin >> mb;

    soma = mo + mp + mb;

    cout << "O Brasil ganhou " << soma << " medalhas nas Olimpíadas. \n";



    return 0;
}
