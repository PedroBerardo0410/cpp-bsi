#include <iostream>
#include <locale>

using namespace std;

int soma(int *ptr1, int*ptr2){
    int result;
    result = (*ptr1 *3 )+ (*ptr2 *3);
    cout << result;
    return result;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int a,b;
    cout << "Informe o primeiro valor inteiro: "<< endl;
    cin >> a;
    cout << "Informe o segundo valor inteiro: "<<endl;
    cin >> b;


    cout << "A soma do triplo dos dois números é: \n";
    soma(&a,&b);


    return 0;
}
