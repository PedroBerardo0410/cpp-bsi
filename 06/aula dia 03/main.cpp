#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetor[5];
    for (int i=0;i<5;i++){
        cout << "Digite o valor : "<< i+1 << endl;
        cin >> vetor[i];
    }
    cout << "Os valores sao: " << endl;
    for(int i=0;i<5;i++){
        cout << vetor[i];
        if(vetor[i] % 2 == 0)
            cout << " - Par" << endl;
        else
            cout << " - Impar" << endl;
    }
    return 0;
}
