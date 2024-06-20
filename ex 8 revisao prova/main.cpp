#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float matriz[4][5], matrizr[4][5];

    for (int i=0;i<4;i++){
        for (int j=0;j<5;j++){
            cout << "Digite um valor para a linha " << i+1 << " e para a coluna " << j+1 << ": " << endl;
            cin >> matriz[i][j];
        }
    cout << endl;
    }
    for (int i=0;i<4;i++){
        for (int j=0;j<5;j++){
                matrizr[i][j] = matriz [i][j] / 2;
        }
    }

    cout << "A matriz então será: " << endl;
    for (int i=0;i<4;i++){
        for (int j=0;j<5;j++){
                cout << matriz[i][j] << "\t";
        }
    cout << endl;
    }

    cout << "A matriz com os valores resultantes: " << endl;

    for (int i=0;i<4;i++){
        for (int j=0;j<5;j++){
                cout << matrizr[i][j] << "\t";
        }
    cout << endl;
    }

    return 0;
}
