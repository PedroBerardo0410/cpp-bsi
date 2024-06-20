#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int ope, soma, n1, n2, subtrair, multiplicar;
    float n3, n4, divisao;

    cout << "Escolha uma das opções: \n";
    cout << "1 - para SOMAR \n";
    cout << "2 - para SUBTRAIR \n";
    cout << "3 - para DIVIDIR \n";
    cout << "4 - para MULTIPLICAR \n";
    cout << "5 - para SAIR \n";
    cout << "       \n";
    cout << "Informe a opção desejada: ";
    cin >> ope;

    switch(ope){
    case 1:
        cout << "Digite o primeiro número: \n";
        cin >> n1;
        cout << "Digite o segundo número: \n";
        cin >> n2;
        soma = n1 + n2;
        cout << "A soma é : " << soma << " \n";
        break;
    case 2:
        cout << "Digite o primeiro número: \n";
        cin >> n1;
        cout << "Digite o segundo número: \n";
        cin >> n2;
        subtrair = n1 - n2;
        cout << "A subtração é : " << subtrair << " \n";
        break;
        case 3:
            cout << "Digite o primeiro número: \n";
        cin >> n3;
        cout << "Digite o segundo número: \n";
        cin >> n4;
        divisao = n3 / n4;
        cout << "A divisão é : " << divisao << " \n";
        break;
        case 4:
            cout << "Digite o primeiro número: \n";
        cin >> n1;
        cout << "Digite o segundo número: \n";
        cin >> n2;
        multiplicar = n1 * n2;
        cout << "A multiplicação é : " << multiplicar << " \n";
        break;
        case 5:
            cout << "Código finalizado. \n";
            break;
        default:
            cout << "Código Inválido. \n";



    }

    return 0;
}
