#include <iostream>
#include <locale>

using namespace std;

float imc(float peso, float altura){
    float resultado;
    resultado = peso / altura;
    cout << "O IMC é: ";
    return resultado;

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int clientes;
    cout << "Programa para calcular o IMC dos clientes" << endl;

    cout << "Quantos clientes você quer calcular o IMC? ";
    cin >> clientes;

    struct pessoas {
        char nome[60];
        float peso;
        int altura;

    }strImc[clientes];

    for(int i=0;i<clientes;i++){
        cout << "\nInforme o nome do cliente: ";
        cin >> strImc[i].nome;
        cout << "\nInforme o peso do cliente: ";
        cin >> strImc[i].peso;
        cout << "\nInforme a altura do cliente: ";
        cin >> strImc[i].altura;
        cout << imc(strImc[i].peso, strImc[i].altura);
        fflush(stdin);
    }



    return 0;
}
