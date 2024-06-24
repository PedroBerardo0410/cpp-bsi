#include <iostream>

using namespace std;

int main()
{

    int num, mult;
    char sn;

    do{
        cout << "Voce deseja imprimir uma tabuada? ";
        cin >> sn;
        sn = toupper(sn);
        if(sn!='S'){
                cout << "Saindo..." << endl;
            return 0;
        }
        cout << "Informe um numero entre 1 e 9 para a tabuada: ";
        cin >> num;
    if(num>9){
        cout << "Numero invalido.";
    }
    cout << "==========================" << endl;
    for(int i=1;i<10;i++){
            mult = num * i;
        cout << num << " X " << i << " = " << mult << endl;
    }
    cout << "==========================" << endl;
    }while (sn == 'S');




    return 0;
}
