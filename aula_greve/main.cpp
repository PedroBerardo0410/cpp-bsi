#include <iostream>
#include <cstring>
#include <locale>


using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char palavra[20];
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;
    cout << "A palavra tem " << strlen(palavra) << " letras." << endl;

    return 0;
}
