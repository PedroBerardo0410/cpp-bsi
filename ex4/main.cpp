#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int qntd=5, i, idmaior;
    string nomedonomaior,nomepetmaior;

    struct pet{
        string nomeani, especie, raca, sexo, nomedono, rg, telefone;
        int idade;
    }cadastro[qntd];

    for (i=0;i<5;i++){
        cout << "Informe o nome do pet: ";
        fflush(stdin);
        getline(cin, cadastro[i].nomeani);

        cout << "Informe a espécie do pet: ";
        fflush(stdin);
        getline(cin, cadastro[i].especie);

        cout << "Informe a raça do pet: ";
        fflush(stdin);
        getline(cin, cadastro[i].raca);

        cout << "Informe o sexo do pet: ";
        fflush(stdin);
        getline(cin, cadastro[i].sexo);

        do{
        cout << "Informe a idade do pet: ";
        fflush(stdin);
        cin >> cadastro[i].idade;
        }while(cadastro[i].idade<0 && cadastro[i].idade>200);

        cout << "Informe o nome do dono: ";
        fflush(stdin);
        getline(cin, cadastro[i].nomedono);

        if(cadastro[i].idade >= idmaior){
            idmaior = cadastro[i].idade;
            nomedonomaior = cadastro[i].nomedono;
            nomepetmaior = cadastro[i].nomeani;

        }

        cout << "Informe o rg do dono: ";
        fflush(stdin);
        getline(cin, cadastro[i].rg);

        cout << "Informe o telefone do dono: ";
        fflush(stdin);
        getline(cin, cadastro[i].telefone);
        cout << endl;

    }

    for(i=0;i<5;i++){
        cout << "INFORMAÇÕES DO PET \n";
        cout << "Nome do Pet: " << cadastro[i].nomeani << endl;
        cout << "Espécie do pet: " << cadastro[i].especie << endl;
        cout << "Raça do pet: " << cadastro[i].raca << endl;
        cout << "Sexo do pet: " << cadastro[i].sexo << endl;
        cout << "Idade do pet: " << cadastro[i].idade << endl;
        cout << "INFORMAÇÕES DO DONO \n";
        cout << "Nome do dono: " << cadastro[i].nomedono << endl;
        cout << "Rg do dono: " << cadastro[i].rg << endl;
        cout << "Telefone do dono: " << cadastro[i].telefone << endl;
    }
    cout << endl;

    cout << "Nome do pet mais velho: " << nomepetmaior<< endl;
    cout << "Idade do pet mais velho: " << idmaior << endl;
    cout << "Nome do dono do pet mais velho: " << nomedonomaior << endl;

    return 0;
}
