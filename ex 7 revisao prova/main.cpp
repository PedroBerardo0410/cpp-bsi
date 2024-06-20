#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[6][6];

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout << "Digite um valor da posição " << i+1 << ", " << j+1 << " da matriz: \n";
            cin >> matriz[i][j];
        }
    cout << endl;
    }

    cout << "Os valores da matriz são: " << endl;

     for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
                cout << matriz[i][j] << "\t";
        }
    cout << endl;
     }

    cout << "Os valores da diagonal secundária são: " << endl;

     for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
                if( j == 5 - i){
                    cout << matriz[i][j] << "\t";
                }else{
                    cout << "\t";
                }
        }
        cout << endl;
     }


    return 0;
}
