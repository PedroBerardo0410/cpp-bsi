#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
   int matriz[4][4];

   for(int i=0; i<4;i++){
    for(int j=0;j<4;j++){
        cout << "Digite o valor para prencher a linha " << i+1 << " e coluna " <<j+1<< ": ";
        cin >> matriz[i][j];
    }
   }

    cout << "Os valores da matriz são: " << endl;

    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
                cout << matriz [i][j] << "\t";
        }
    cout << endl;
    }
    return 0;
}
