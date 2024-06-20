#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;

    cout << "Digite a sua idade: \n";
    cin >> idade;

    if (idade >= 65){
        cout << "Você pode ser atendido em fila preferêncial. \n";
        cout << "    \n";
        cout << "    \n";
        cout << "Dirija-se ao caixa 1. \n";
    } else{
             cout << "Você será atendido nos caixas convencionais. \n";
             cout << "Dirija-se a um dos caixas: \n";
             cout << "Caixa 2; \n";
             cout << "Caixa 3; \n";
             cout << "Caixa 4; \n";


    }

    return 0;
}
