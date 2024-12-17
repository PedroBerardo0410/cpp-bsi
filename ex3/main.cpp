#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int matriz[4][4], i=0, j=0;


    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout << "Informe um valor para a posição ["<<i+1<<"]["<<j+1<<"]: ";
            cin >> matriz[i][j];
        }
    }


    cout<< "A diagonal principal é: \n";
     for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j){
                cout << "["<<matriz[i][j]<< "]\t";
            }else{
                cout << "\t";
            }
        }
        cout << endl;
    }


    cout<< "A matriz normal é: \n";
     for(i=0;i<4;i++){
        for(j=0;j<4;j++){
                cout << "["<<matriz[i][j] << "]\t";
        }
        cout<<endl;
     }

    return 0;
}
