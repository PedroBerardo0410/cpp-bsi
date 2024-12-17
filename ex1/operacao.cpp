#include <iostream>
#include <cmath>
#include "operacao.h"

using namespace std;

void receberRaio(double *raio) {
    cout << "Informe o raio da esfera: ";
    cin >> *raio;
}

double calcularArea(double *raio) {
    return 4 * M_PI * pow(*raio, 2);
}

double calcularVolume(double *raio) {
    return (4.0 / 3.0) * M_PI * pow(*raio, 3);
}

void exibirRaio(double *raio) {
    cout << "Raio: " << *raio << endl;
}

void exibirResultado(double *raio) {
    cout << "A área da esfera é: " << calcularArea(raio) << endl;
    cout << "O volume da esfera é: " << calcularVolume(raio) << endl;
}
