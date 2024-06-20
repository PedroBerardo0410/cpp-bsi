#include <iostream>
#include <Cstring>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nome;
    cout << "Olá, vamos conversar? " << endl;

    cout << "Qual é o seu nome? ";
    getline(cin,nome);
    cout << "\nNossa " << nome << ", que nome feio. \n";

    return 0;
}
