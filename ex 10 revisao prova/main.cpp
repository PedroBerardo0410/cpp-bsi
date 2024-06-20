#include <iostream>
#include <locale>
#include <fstream>

using namespace std;

int main()
{
    fstream arq;
    arq.open("Pets.txt", ios::out | ios::app); // out para gravar , app para ler
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

    if (arq.is_open()) {
    for (int i=0;i<qa;i++){
        arq << "Nome do pet: " << strPet[i].nome << "\n";
        arq << "Espécie do pet: " << strPet[i].especie << "\n";
        arq << "Raça do pet: " << strPet[i].raca << "\n";
        arq << "Sexo do pet: " << strPet[i].sexo << "\n";
        arq << "Idade do pet: " << strPet[i].idade << "\n";
        arq << "Nome do dono: " << strPet[i].nomedono << "\n";
        arq << "Rg do dono: " << strPet[i].rg << "\n";
        arq << "Telefone do dono: " << strPet[i].telefone << "\n";
    }
    arq.close();
    }
    else {
        cout << "ERRO: arquivo não foi aberto ou não existe" << "\n";
    }
    return 0;
}
