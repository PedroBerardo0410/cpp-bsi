#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int  senha, i;
    const int senha_correta = 1234;


    for(i=0; i < 3; i++){
    cout << "Digite sua senha: \n";
    cin >> senha;

    if (senha == senha_correta){
        cout << "Senha correta. \n";
        return 0;
    }
        cout << "Senha incorreta. \n";

    }

    return 0;
}
