#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char palavra1[20], palavra2[20];
    cout << "Digite a Palavra 1: " << endl;
    cin >> palavra1;
    cout << "Digite a Palavra 2: " << endl;
    cin >> palavra2;

    if (strcmp(palavra1, palavra2)==0){
        cout << "As palavras sao iguais";
    }
    else{
         cout << "As palavras sao diferentes";
    }
    return 0;
}
