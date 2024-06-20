#include <iostream>

using namespace std;

int main()
{
    int cubo[6][3][3];

    for(int k=0;k<6;k++){
            cout << "Lado " << k+1  << endl;
        for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout << "Informe valor da face " << k+1 << " ,linha "<< i+1 << " ,coluna " << j+1 << endl;
                    cin >> cubo[k][i][j];
                    cout << "  " << cubo[k][i][j];
                    cout << endl;
                }
        }
    }
    return 0;
}
