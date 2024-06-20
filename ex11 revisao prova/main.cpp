#include <iostream>
#include <locale>

using namespace std;

float imc(float peso, float altura){
    float resultado;
    resultado = peso / altura;
    cout << "\nO IMC é: ";
    return resultado;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
   float peso, altura;



   cout << "Digite o peso: ";
   cin >> peso;
   cout << "\nDigite a altura: ";
   cin >> altura;

   cout << imc(peso, altura);

    return 0;
}
