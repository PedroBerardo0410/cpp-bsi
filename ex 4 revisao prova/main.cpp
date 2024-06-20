#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float vetor1[5], vetor2[5], media[5];

    for(int i=0; i<5; i++){
        cout << "\nDigite a nota da P1 do aluno " << i+1 << ": ";
        cin >> vetor1[i];
        cout << "Digite a nota da P2 do aluno " << i+1 << ": ";
        cin >> vetor2[i];
        media[i] = (vetor1[i] + vetor2[i]) / 2;
    }

    cout << "\nSituação dos alunos: \n";

    for (int j=0; j<5;j++){
        cout << "Aluno: " << j+1 << " P1 = " << vetor1[j] << " P2 = " << vetor2[j] << endl;
        cout << "Média = " << media[j] << endl;
        if(media[j] < 6){
            cout << "REPROVADO \n";
        }else{
            cout << "APROVADO \n";
        }
    }
    return 0;
}
