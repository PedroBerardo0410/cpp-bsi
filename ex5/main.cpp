#include <iostream>
#include <locale>
#include <cmath>

using namespace std;
void calculaSoma(int x,int y){
        int result = 0;
        result = x+y;
        cout << "A soma � " << result;
        cout << endl;
    }
void calculaMultiplicacao(int x, int y, int z){
        int result = 0;
        result = x*y*z;
        cout << "A multiplica��o � " << result;
        cout << endl;
}
void calculaDiv(int x, int y){
        float result =0;
        result = x/y;
        cout << "A divis�o � " << result;
        cout << endl;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char opc;
    int s1,s2, x1, x2, x3, d1, d2;

    do{
    cout << "\nA - para somar dois n�meros\n";
    cout << "\nB - para multiplicar tr�s n�meros\n";
    cout << "\nC - para fazer a divis�o de dois n�meros\n";
    cout << "\nS - para sair do menu\n";
    cout <<endl;
    cin >> opc;
    opc = toupper(opc);
    fflush(stdin);
    cout << endl;
     switch(opc){
        case 'A':
            cout << "Informe o primeiro n�mero para ser somado: ";
            cin >> s1;
            cout << "Informe o segundo n�mero para ser somado: ";
            cin >> s2;
            calculaSoma(s1,s2);
            break;
        case'B':
            cout << "Informe o primeiro n�mero para multiplicar: ";
            cin >> x1;
            cout << "Informe o segundo n�mero para multiplicar: ";
            cin >> x2;
            cout << "Informe o terceiro n�mero para multiplicar: ";
            cin >> x3;
            calculaMultiplicacao(x1,x2,x3);
            break;
        case'C':
            do{
            cout << "\nInforme o primeiro n�mero para a divis�o: ";
            cin >> d1;
            cout << "Informe o segundo n�mero para a divis�o: ";
            cin >> d2;
            if(d1 <= 0 || d2 <=0) {
                cout << "\nDigite um n�mero maior que 0 para fazer a divis�o.";
                cout << endl;
            }else{
                calculaDiv(d1,d2);
            }}while(d1 <= 0 || d2 <=0);
            break;
        default:
            cout << "ENCERRANDO O MENU...";
            cout << endl;
     }
    }while(opc!='S');



    return 0;
}
