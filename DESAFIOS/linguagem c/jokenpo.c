#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("Jogo de Jokenpô\n\n\n");
    printf("Escolha uma opção:\n\n");
    printf("1 - PEDRA\n");
    printf("2 - PAPEL\n");
    printf("3 - TESOURA\n\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 +1;

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: PEDRA: - ");
        break;
    case 2:
        printf("Jogador: PAPEL: - ");
        break;
    case 3:
        printf("Jogador: TESOURA: - ");
        break;
    
    default:
        printf("Opção Inválida!");
        break;
    }
    switch (escolhaComputador)
    {
    case 1:
        printf("PEDRA: Computador\n ");
        break;
    case 2:
        printf("PAPEL: Computador\n ");
        break;
    case 3:
        printf("TESOURA: Computador\n ");
        break;
    }
    if (escolhaComputador == escolhaJogador){
        printf("### EMPATE ###\n\n");
    }
    else if ((escolhaJogador == 1) && (escolhaComputador == 3) || 
            (escolhaJogador == 2) && (escolhaComputador == 1) ||
            (escolhaJogador == 3) && (escolhaComputador == 2))
            {
            printf("### YOU WIN ###\n");
            }
            else {
            printf("### YOU LOOSE ###\n");
             }
    



    return 0;

}