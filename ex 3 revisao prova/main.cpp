#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor1[10], vetor2[10], mult[10];

    for( int i =0;i<10;i++){
       cout << "Digite o "<< i+1 << "° valor do vetor 1: ";
       cin >> vetor1[i];
    }

    for (int i =0; i<10; i++){
        cout << "Digite o "<< i+1 << "° valor do vetor 2: ";
        cin >> vetor2[i];
    }

    cout << "Os valores do vetor 1 são: ";
    for ( int j =0;j<10;j++){
        cout << vetor1[j] << " - ";
    }
    cout << "\nOs valores do vetor 2 são: ";
    for ( int j =0;j<10;j++){
        cout << vetor2[j] << " - ";
    }

    cout << "\nOs valores multiplicados dos vetores são de: ";

    for(int x =0; x<10; x++){
        mult[x] = vetor1[x] * vetor2[x];
        cout << mult[x] << " - ";
    }

    return 0;
}
