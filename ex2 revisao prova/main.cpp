#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[8], div = 0 ;

    for(int i=0;i<8;i++){
        cout << "Digite o "<< i+1 << "° valor: ";
        cin >> vetor[i];
        if(vetor[i] % 3 == 0){
            div ++;
        }
    }

    cout << "Os valores digitados são: \n";
    for(int j=0;j<8;j++){
        cout << vetor[j] << " - ";
    }

    cout << "\nForam digitados "<< div << " números divisiveis por 3. \n";

    return 0;
}
