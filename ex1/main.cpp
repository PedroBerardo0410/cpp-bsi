#include <iostream>
#include <cmath>
#include "operacao.h"

using namespace std;


int main() {
 //   double *raio = new double;
    double raio;
    int opcao;

    do {
        cout << "\nMenu:\n";
        cout << "1. Calcular área\n";
        cout << "2. Calcular volume\n";
        cout << "3. Exibir raio\n";
        cout << "4. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            receberRaio(&raio);
            //raio = 2;
            cout << "A área da esfera é: " << calcularArea(&raio) << endl;
            break;
        case 2:
            receberRaio(&raio);
             //raio = 2;
            cout << "O volume da esfera é: " << calcularVolume(&raio) << endl;
            break;
        case 3:
            //raio =2;
            receberRaio(&raio);
            exibirRaio(&raio);
            break;
        case 4:
            cout << "Saindo...\n";
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
        }
    } while (opcao != 4);

    //delete(raio);

    return 0;
}
