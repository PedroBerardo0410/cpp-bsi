#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
   int vetor[10], soma = 0, i;

   for (i=0;i<10;i++){
        cout << "Informe o " << i+1 << "� n�mero positivo: ";
        cin >> vetor[i];
        if(vetor[i] < 0){
            i--;
            vetor[i] = 0;
        }
        soma+=vetor[i];
   }
   cout << "A soma do n�meros do vetor �: " << soma << "\n";
   cout << "Os valores do vetor s�o: \n";

   for (i=0;i<10;i++){
    cout << "[" << vetor[i] << "]";
   }
    return 0;
}
