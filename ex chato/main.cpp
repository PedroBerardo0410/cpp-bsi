#include <iostream>
#include <cstring>
#include <cstdlib>
#include <locale>
#include <iomanip>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char opc, sn, ec;
    int tj, tf, tff, rc, tc, le, ro, rl, cc;


do {
        cout << "\nEae, vamos nos comunicar? (s ou n)\n";
        cin >> opc;
        opc = toupper(opc);

        if (opc != 'S') {
            cout << "\nVocê não tem escolha, vai conversar comigo sim! \n";
        }

    } while (opc != 'S');

        cout << "\nOK, vamos começar... \n";




        cout << "\nVocê joga algum jogo online? (s ou n) \n";
        cin >> sn;

if (sn == 's'){
        cout << "\nQual tipo de jogo? \n";
        cout << "1 - para RPG;\n";
        cout << "2 - para FPS;\n";
        cout << "3 - para autochess;\n";
        cout << "4 - para outro;\n";
        cin >> tj;

        cout << "\nAinda bem que você joga algum jogo, estava achando você depressivo e sem rumo... \n";

}else {
        cout << "\nO que você faz da vida entao meu caro, vai caçar jeito de jogar qualquer jogo, e você será muito mais feliz. \n";

        }
        cout << "\nVocê gosta de futebol? (1 - para sim e 2 - para nao) \n";
        cin >> tf;

if ( tf == 1 ){
            cout << "\nQual time você torce? \n";
            cout << "**************************** \n";
            cout << "1 para São Paulo;\n";
            cout << "2 para Palmeiras;\n";
            cout << "3 para Santos;\n";
            cout << "4 para Flamengo;\n";
            cout << "5 para outro time;\n";
            cout << "É notório que os time estão em ordem de maioridade. \n";
            cin >> tff;

switch (tff){
            case 1:
                cout << "São Paulo, time bom, campeão de tudo, nao tem o que falar mal.\n";
                break;
            case 2:
                cout << "Palmeiras, melhor time da atualidade, ganhou tudo várias vezes, e infelizmente falta apenas o mundial :c, porém maior campeão nacional. \n";
                break;
            case 3:
                cout << "Santos, time falido, joga serie B, time repleto de 3 eras, era do Pelé, era do Neymar, e do já era. \n";
                break;
            case 4:
                cout << "Flamengo, time criado em 2019, costuma sempre ficar no cheirinho para o grande Palmeiras. \n ";
                break;
            case 5:
                cout << "Provavelmente seu time é minúsculo, sinto muito por você não torcer pro palmeiras.\n ";
                break;
            default:
                cout << "Cara é tão  que consegue errar o número que eu pedi.\n";
                break;
}
} else{
            cout << "\nÉ uma pena não assistir o Endrick jogar... \n";
}

            cout << "\nNo momento, você está em algum compromisso? (namorando, ficando, casado) se sua resposta for sim digite 1, caso sua resposta seja não digite 2. \n";
            cin >> rc;

if (rc == 1){
            cout << "\nMas você está em que tipo de compromisso?\n";
            cout << "\n1 - para namorando;\n";
            cout << "\n2 - para ficando;\n";
            cout << "\n3 - para casado;\n";
            cout << "\n4 - para outro;\n";
            cin >> tc;

    switch(tc){
    case 1:
        cout << "\nDa para notar que você é uma pessoa séria e que gosta do seu compromisso.\n";
        break;
    case 2:
        cout << "\nFicando? sério? tinha que ser um aquariano nato mesmo...\n";
    case 3:
        cout << "\nCasado já? você deve ter uma idade elevada, mas parabéns por conquistar algo assim.\n";
        break;
    case 4:
        cout << "\nExiste outro tipo de compromisso? kkkkkkkkkkk\n";
        break;
    default:
        cout << "\nERA PARA DIGITAR ALGUM NÚMERO ENTRE 1 E 4 MAS ISSO É MUITO PARA VOCÊ.\n";
    }
} else{
        cout << "\nCurtindo a vida de solteiro, 'EU TENTEIII'\n";
}

        cout << "\nVocê sabe falar inglês ?(1 - para sim, e 2 - para não)\n";
        cin >> le;

if (le == 1){
        cout << "\nParabéns, você está à alguns passos na frente dos outros, inglês é algo muito importante para seu emprego.\n";
}else {
        cout << "\nBusque aprender o Inglês nem que seja o básico, isto faz falta em uma entrevista de emprego.\n";
}
        cout << "\nVamos jogar um jogo agora...\n";
        cout << "\nSim, você não tem opção de escolha.\n";
        cout << "\nSe você pudesse girar um roleta que tenha 75% de chance de você virar milionário, e 25% de chance de você morrer, você giraria?\n";
        cout << "1 - sim;\n";
        cout << "2 - não;\n";
        cin >> ro;

if(ro == 1){
        cout << "\nQue isso, que ser ousado você é, então sua vida vale nada né? Para você 'apostar' ela.\n";
}else {
        cout << "\nParabéns, você sabe valorizar a sua vida.";
}
        cout << "\nCerca de 54% de pessoas aceitariam girar está roleta.\n";


        cout << "\nVamos mais uma...\n";
        cout << "\nVocê prefere ser inteligente e azarado ou burro e realmente sortudo? \n";
        cout << "1 - inteligência e azar;\n";
        cout << "2 - burro e sortudo;\n";
        cin >> rl;

if (rl == 1){
        cout << "\nVocê presa pela inteligência, boa escolha.\n";
}else {
        cout << "\nCuidado a inteligência não muda ela é para sempre, já a sorte muda.\n";
}
        cout << "\nCerca de 72% das pessoas escolhem a inteligência.\n";

        cout << "\nVamos para o último joguinho\n";
do{
        cout << "\nDe 0 a 10 quanto você gosta de chocolate?\n";
        cin >> cc;
if (cc < 0 || cc > 10){
        cout << "\nEra um número de 0 a 10 e você digitou errado parabéns.\n";
}
}while(cc < 0 || cc > 10);

if (cc >= 0 && cc <=5 ){
        cout << "\nComo assim você gosta tão pouco assim de chocolate, melhor doce já criado.\n";
} if(cc >5 && cc <= 8){
        cout << "\nChocolate é bom demaisss\n";
} if(cc > 8 && cc <=10){
        cout << "\nChocolate é melhor invenção, porém tudo em excesso faz mal cuidado.\n";
}

do{
        cout << "\nPor mim ja deu, vamos encerrar nossa conversa? (s ou n)\n";
        cin >> ec;
        ec = toupper(ec);
if(ec != 'S'){
        cout << "\nVocê não tem escolha de nada, e vamos terminar a conversa mesmo assim, tchau tchau\n";
        return 0;
    }
} while(ec != 'S');

        cout << "\nEnfim nossa conversa se encerra por aqui, tenha um bom dia.\n";

        return 0;
    }






