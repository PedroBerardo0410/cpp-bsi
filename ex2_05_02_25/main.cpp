#include <iostream>

using namespace std;

void pedir(char vet[]){
    for(int i=0;i<15;i++){
        cout << "Informe o "<<i+1<<"° caractere: "<<endl;
        cin >> vet[i];
    }
}

void mostrar(char vet[]){
    cout << "Caractere digitados:\n";
    for(int i=0;i<15;i++){
        cout << vet[i]<<endl;
    }
}

void invertido(char vet[]){
    cout << "Caractere em ordem invertida: \n";
    for(int i=0;i<15;i++){
            if(i == 0){
                cout << vet[i+1]<<endl;
                continue;
            }
            if(i == 1){
                cout << vet[i-1]<<endl;
                continue;
            }
        cout << vet[i]<<endl;
    }
}

int main()
{
    char vet[15];

    pedir(vet);
    mostrar(vet);
    invertido(vet);

    return 0;
}
