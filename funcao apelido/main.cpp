#include <iostream>

using namespace std;

float capacidade (float,float,float);

int main()
{
    float comprimento, largura, altura;
    cout << "Digite o comprimento da piscina: \n";
    cin >> comprimento;
    cout << "Digite a largura da piscina: \n";
    cin >> largura;
    cout << "Digite a altura da piscina: \n";
    cin >> altura;
    cout << "A piscina possui : " << capacidade(comprimento, largura, altura) << " metros cubicos.";
    return 0;
}

float capacidade(float comprimento, float largura, float altura){
    float resultado;
    resultado = comprimento * largura * altura;
    return resultado;
}
