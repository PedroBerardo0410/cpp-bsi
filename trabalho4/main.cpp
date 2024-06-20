#include <iostream>
#include <locale>
#include <cctype>
#include <iomanip>
using namespace std;
//14.	A prefeitura de uma cidade fez uma pesquisa entre 15 habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
//•	média do salário da população;
//•	média do número de filhos;
//•	maior salário; .

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, filhos, somas = 0, somaf = 0;
    float  salario,medias, mediaf;
    double maiorsal = 0;

    for ( i = 0; i < 2; i++){
        cout << "Informe seu salário: \n";
        cin >> salario;
        cout << "Informe a quantidade de filhos: \n";
        cin >> filhos;

        somas+= salario;
        somaf+= filhos;

        if (salario > maiorsal){
            maiorsal = salario;
        }


    }

    medias = somas / 2;

    mediaf = somaf / 2;

    cout << "A média salarial é de: " << medias << "\n";
    cout << "A média de filhos é de: " << mediaf << "\n";
    cout << "O maior salário é de: " << maiorsal << "\n";


    return 0;
}
