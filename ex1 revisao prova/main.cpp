#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[10], soma = 0;
    for (int i=0;i<10;i++){
        cout << "Digite o " << i+1 << "° valor: \n";
        cin >> vetor[i];
        soma += vetor[i];
    }
    cout << "Os valores digitados são: ";

    for (int j=0;j<10;j++){
            cout << vetor[j] << " - ";
    }
    cout << "\nA soma desses números são: " << soma << endl;

    return 0;
}
