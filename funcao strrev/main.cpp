#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char palavra[20];
    cout << "Este exemplo inverte uma palavra." << endl;
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;
    cout << "A Palavra " << palavra << " invertida fica: " << strrev(palavra);
    return 0;
}
