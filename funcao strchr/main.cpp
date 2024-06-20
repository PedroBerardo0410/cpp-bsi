#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char texto[] = "Este exemplo busca por um determinado caracter dentre de uma string.";
    char *ptr;
    cout << "Procurando por 's' no texto: \n\n" << texto << endl;
    ptr=strchr(texto,'s');

    if (*ptr){
        cout << "A letra s apareceu a primeira vez na posicao: " << ptr-texto+1 << "\n";
        return 0;
    }
    else{
        cout << "Letra nao encontrada no texto.";
    }
    return 0;
}
