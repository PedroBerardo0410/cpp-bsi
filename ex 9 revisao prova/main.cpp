#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int qa;

    cout << "Quantos animais você quer cadastrar? ";
    cin >> qa;

     struct informacao{
        char nome[60];
        char especie[20];
        char raca[20];
        char sexo [20];
        int idade;
        char nomedono[60];
        int rg;
        int long long telefone;
    }strPet[qa];

    for(int i=0;i<qa;i++){
        cout << "Informe o nome do pet: ";
        cin >> strPet[i].nome;
        cout << "\nInforme a espécie do pet: ";
        cin >> strPet[i].especie;
        cout << "\nInforme a raça do pet: ";
        cin >> strPet[i].raca;
        cout << "\nInforme o sexo do pet: ";
        cin >> strPet[i].sexo;
        cout << "\nInforme a idade do pet: ";
        cin >> strPet[i].idade;
        cout << "\nInforme o nome do dono: ";
        cin >> strPet[i].nomedono;
        cout << "\nInforme o rg do dono: ";
        cin >> strPet[i].rg;
        cout << "\nInforme o telefone do dono: ";
        cin >> strPet[i].telefone;
        cout << endl;
        fflush(stdin);
    }
    cout << "Clientes cadastrados com sucesso!!" << endl;

    for (int i=0;i<qa;i++){
        cout << "Nome do pet: " << strPet[i].nome << endl;
        cout << "Espécie do pet: " << strPet[i].especie << endl;
        cout << "Raça do pet: " << strPet[i].raca << endl;
        cout << "Sexo do pet: " << strPet[i].sexo << endl;
        cout << "Idade do pet: " << strPet[i].idade << endl;
        cout << "Nome do dono: " << strPet[i].nomedono << endl;
        cout << "Rg do dono: " << strPet[i].rg << endl;
        cout << "Telefone do dono: " << strPet[i].telefone << endl;
    }

    return 0;
}
