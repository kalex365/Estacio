#include <stdio.h>

int main (){

//Entrada de dados da primeira carta.

    int carta = 1;
    char estado = 'A';
    char codigo[3] = "A01";
    char cidade[12] = "São Paulo";
    int populacao = 12325000;
    double area = 1521.11;
    double pib = 699.28;
    int ponto = 50;

//Impressão de Dados na tela

    printf("############################### \n");
    printf("Carta: %d \n\n", carta);
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("Populacao: %d \n", populacao);
    printf("Area: %f  km² \n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d \n\n\n", ponto);

//Entrada de dados da segunda carta.

    int carta2 = 2;
    char estado2 = 'B';
    char codigo2[3] = "B02";
    char cidade2[16] = "Rio de Janeiro";
    int populacao2 = 6748000;
    double area2 = 1200.25;
    double pib2 = 300.50;
    int ponto2 = 30;

//Impressão de Dados na tela

    printf("############################### \n");
    printf("Carta: %d \n\n", carta2);
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %2.f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Numero de Pontos Turisticos: %d \n\n\n", ponto2);


    return 0;
}
//Fim do programa
