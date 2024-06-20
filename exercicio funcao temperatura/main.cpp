#include <iostream>

using namespace std;

float conversor(float);

int main()
{
    int f,c;
    cout << "Este programa e um conversor de fahrenheit para celsius" <<endl;
    cout <<  "Informe a temperatura em fahrenheit: \n";
    cin >> f;
    cout << "A temperatura em Celsius e de: "<< conversor(f) << endl;

    return 0;
}
float conversor(float f){
    float resultado;
    resultado = (f - 32)/1,8;

}

