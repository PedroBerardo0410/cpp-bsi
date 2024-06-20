#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor1[10] = {10,9,8,7,6,5,4,3,2,1};

    cout << "Os valores do vetor são: " << endl;

    for (int i=0;i<10;i++){
        cout << vetor1[i] << " - ";
    }

    cout << "\n\nOs valores do vetor na ordem inversa são: " << endl;

    for( int i=10;i>0;i--){
        cout << vetor1[i-1] << " - ";
    }


    return 0;
}
