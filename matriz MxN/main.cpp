#include <iostream>

using namespace std;

int main()
{
    int M,N,i,j;
    cout << "Digite a quantidade de linha: \n";
    cin >> M;
    cout << "Digite a quantidade de coluna: \n";
    cin >> N;
    int matriz1[M][N], matriz2[M][N];
    cout << "Matriz 1 \n";
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            cout << "Digite o valor para preencher a matriz [" << i+1 << ", " << j+1 << "]: "<< endl;
            cin >> matriz1[i][j];
        }
        cout << endl;
    }
    cout << "Matriz 2 \n";
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            cout << "Digite o valor para preencher a matriz [" << i+1 << ", " << j+1 << "]: "<< endl;
            cin >> matriz2[i][j];
        }
        cout << endl;
    }
    cout << "Soma das matrizes: \n";

    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
                cout << matriz1[i][j] + matriz2[i][j] << "\t";
        }
    cout << endl;
    }






    return 0;
}
