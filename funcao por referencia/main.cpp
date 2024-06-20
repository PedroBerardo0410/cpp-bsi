#include <iostream>
#include <cstring>

using namespace std;

void troca(int &a, int &b){
    int temp;

    temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a, b;
    cout << "Entre com dois numeros: ";
    cin >> a >> b;

    troca(a, b);
    cout << "Os numeros trocados fica: "<< a << " e " << b << endl;
    return 0;
}
