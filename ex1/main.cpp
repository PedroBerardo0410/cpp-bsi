#include <iostream>

using namespace std;

void pedir(int vet[])
{
    for(int i=0; i<=9; i++)
    {
        cout << "Informe o "<<i+1<<"° número: "<<endl;
        cin >> vet[i];
    }
}

void em_ordem(int vet[])
{
    cout << "Números digitados:\n";
    for(int i=0; i<=9; i++)
    {
        if(i == 0)
        {
            int aux = vet[i];

            if(aux > vet[i+1])
            {
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
        cout << vet[i]<<endl;
    }
}

void invertido(int vet[])
{
    cout << "Números em ordem invertida: \n";
    for(int i=9; i>=0; i--)
    {

        cout << vet[i]<<endl;
    }
}

int main()
{
    int vet[10];

    pedir(vet);
    em_ordem(vet);
    invertido(vet);

    return 0;
}
