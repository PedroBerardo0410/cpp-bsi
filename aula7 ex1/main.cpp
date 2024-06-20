#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int vetor[4], i;
    float media = 0;

    for(i=0; i < 4; i++){
        cout << "Informe a nota do aluno " << i + 1<< ": \n";
        cin >> vetor[i];

        media += vetor[i];
    }
    cout << "A media dos alunos e: " << media / 4 << endl;

    return 0;
}
