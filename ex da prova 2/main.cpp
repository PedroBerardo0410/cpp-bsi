#include <iostream>

using namespace std;

int main()
{
    float media = 0,soma=0, mmedia = 0;
    int vetor[5], iq = 0;

    for( int i = 0;i<5;i++){
        cout << "\nDigite o valor de posicao " << i+1 << ": ";
        cin >> vetor[i];
        soma += vetor[i];

        if(vetor[i] == 4){
            iq++;
        }
    }
    media = soma / 5;
    for( int i = 0;i<5;i++){
        if ( vetor[i] > media){
            mmedia++;
        }
    }
    cout << "A soma e de: " << soma  << endl;
    cout << endl << iq << " numeros sao iguais a 4." << endl;
    cout << "A media e de: " << media  << endl;
    cout << mmedia << " numeros sao maiores que a media." << endl;


    return 0;
}
