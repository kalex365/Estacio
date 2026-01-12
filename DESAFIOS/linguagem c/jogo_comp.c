#include <stdio.h>
#include <stdlib.h>
#include <time.h>


 int main(){

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //gerar numero aleatorio

    srand(time(0));
    numeroComputador = rand() % 100 + 1; //numero de 1 a 100.

    // inicio do jogo

    printf("Bem vindo ao jogo MAior, Menor ou Igual!\n");
    printf("Voce deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n\n");

    printf("Escolha a Comparação: \n");
    scanf("%c", &tipoComparacao);

    printf("Digite o seu número (entre 1 e 100): \n");
    scanf("%d", &numeroJogador);

    //exibe o numero do computador.


    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Voce escolheu a opção maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Voce escolheu a opção menor!\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Voce escolheu a opção igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;

    default:
        printf("Opção inválida!!!");
        break;
    }

    printf("O número do Computador é : %d e o número do jogador é: %d\n\n\n", numeroComputador, numeroJogador);

    if (resultado == 1){
        printf("YOU WIN!!!!\n");
    }else {
        printf("YOU LOOSER!!!\n");
    }

    return 0;
 }