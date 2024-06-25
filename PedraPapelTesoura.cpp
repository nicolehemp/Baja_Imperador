//JOGO PEDRA PAPEL TESOURA _ WORKSHOP DO PROCESSO SELETIVO DE 2024

#include <iostream>
#include <ctime>
#include <stdlib.h>
//para mudar a cor das palavras :)
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define RESET "\x1B[0m"


void mostraEscolha(char j, int c);
void condicaoVitoria(char j, int c);

int main () {

char jogador;
int comp, chk=1;

std::cout<<"\n---BEM VINDO AO JOGO "BLU"ROCK"RESET" "GRN"PAPER"RESET" "RED"SCISSOR"RESET"---";

do {
 do {
    std::cout<< "\n\nDigite uma das opcoes:\n"BLU"r - rock"RESET"\n"GRN"p - paper"RESET"\n"RED"s- scissor"RESET"\nq- Sair do jogo\n\n";
    std::cin>>jogador;

    if (jogador!='r' && jogador!='p' && jogador!='s' && jogador!='q') {
        std::cout<<"\nDigite uma opcao valida!";
    }

    if (jogador == 'q') {
        std::cout<<"\nObrigado por jogar!!!";
        return 0;
    }

    } while (jogador!='r' && jogador!='p' && jogador!='s' && jogador!='q');

    srand(time(0));
    comp = (rand() % 3) + 1;

    mostraEscolha(jogador, comp);
    condicaoVitoria(jogador, comp);

} while (chk == 1);
    return 0;
}

void mostraEscolha(char j, int c) {

    switch (j) {
        case 'r':
            std::cout<<"\nSua escolha: "BLU"ROCK"RESET"";
        break;
        case 'p':
            std::cout<<"\nSua escolha: "GRN"PAPER"RESET"";
        break;
        case 's':
            std::cout<<"\nSua escolha: "RED"SCISSOR"RESET"";
        break;
    }

    switch (c) {
    case 1:
        std::cout<<"\nEscolha do Computador: "BLU"ROCK"RESET"";
    break;
    case 2:
        std::cout<<"\nEscolha do Computador: "GRN"PAPER"RESET"";
    break;
    case 3:
        std::cout<<"\nEscolha do Computador: "RED"SCISSOR"RESET"";
    break;
}
}

void condicaoVitoria(char j, int c) {

    //vitoria do jogador
    if (j == 'r' && c == 3) {
        std::cout<<"\n\n"YEL"VOCE GANHOU! :)"RESET"";
    } else if (j == 'p' && c == 1) {
        std::cout<<"\n\n"YEL"VOCE GANHOU! :)"RESET"";
    } else if(j == 's' && c == 2) {
        std::cout<<"\n\n"YEL"VOCE GANHOU! :)"RESET"";    
    } else if (c == 1 && j == 's') { //vitoria do comp
    std::cout<<"\n\n"MAG"VOCE PERDEU! :("RESET"";
    } else if (c == 2 && j == 'r') {
        std::cout<<"\n\n"MAG"VOCE PERDEU! :("RESET"";
    } else if(c == 3 && j == 'p') {
        std::cout<<"\n\n"MAG"VOCE PERDEU! :("RESET"";    
    } else { //empate
        std::cout<<"\n\n"CYN"EMPATE :/"RESET"";
    }

}
