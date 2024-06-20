#include <iostream>

using namespace std;

int main()
{
    int M;
    cout << "Digite o valor da matriz quadrada: \n";
    cin >> M;
    int matriz[M][M];
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            cout << "Digite o valor para preencher a matriz [" << i+1 << ", " << j+1 << "]: "<< endl;
            cin >> matriz[i][j];
        }
    cout << endl;
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            if (i==j ){
            cout << matriz[i][j] << "\t";
            }else{
                cout << "----" << "\t";
            }
        }
        cout << endl;
    }
    return 0;
}
