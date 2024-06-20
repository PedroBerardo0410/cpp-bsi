#include <iostream>

using namespace std;

int main()
{
    int matriz[2][3];
    int i, j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout << "Digite o valor para preencher a matriz [" << i << ", " << j << "]: "<< endl;
            cin >> matriz[i][j];
        }
    }
    return 0;
}
