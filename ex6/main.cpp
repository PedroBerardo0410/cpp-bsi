#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int multiplicador, i, result;

    cout << "Informe um número entre 1 e 9 para que seja apresentada a tabuada : ";
    cin >> multiplicador;


    if(multiplicador >= 1 && multiplicador <= 9 ){
    cout << "         \n";
    cout << "         \n";
    cout << "         \n";

    cout << "Tabuada do " << multiplicador << "\n";
    cout << "********************************* \n";

    for(i=1; i<=10; i++){
            result = multiplicador * i;
        cout << i << " X " << multiplicador << " = " << result << "\n";

    }
    cout << "********************************* \n";
    }else{
        cout << "Código Inválido.";

    }



    return 0;
}
