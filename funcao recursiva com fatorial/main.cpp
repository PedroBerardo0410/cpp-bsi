#include <iostream>

using namespace std;

int fatorial(int valor){
    int resultado;
    if(valor<=1){
        return (1);
    }else{
    resultado = valor * fatorial(valor - 1);
    return resultado;
    }


}
int main()
{
    int valor;
    cout << "Este programa faz calculo fatorial de um numero qualquer" << endl;
    cout << "Informe um valor: \n";
    cin >> valor;
    cout << "O valor em fatorial e: "<< fatorial(valor) << endl;
    return 0;
}
