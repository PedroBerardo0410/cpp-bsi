#include <iostream>

using namespace std;

int main()
{
    int num,i=0,j=0;

    cout << "Informe um numero para a matriz quadrada: ";
    cin >> num;

    int matriz[num][num];
    for ( i=0;i<num;i++){
        for( j=0;j<num;j++){
            cout << "Informe a posicao "<< i+1<< ", " << j+1<< ": ";
            cin >> matriz[i][j];
        }
    }
    cout << "A matriz normal fica: "<<endl;
    for ( i=0;i<num;i++){
        for( j=0;j<num;j++){
            cout << matriz[i][j]<< "\t";
        }
        cout<<endl;
    }

    cout << "A matriz sem uma linha e uma coluna: "<<endl;

    for ( i=0;i<num-1;i++){
        for( j=0;j<num-1;j++){
            cout << matriz[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
