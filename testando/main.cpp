#include <iostream>
#include <locale>
#include <cctype>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char **argv){
    setlocale(LC_ALL, "Portuguese");
 char nome[20];

 cout << "Digite seu Nome: \n";
 cin >> nome;
 nome = toupper(nome);

 if (nome == 'gian'){
    cout << "Gian você é mega gay!!";
 }





    return 0;
}




