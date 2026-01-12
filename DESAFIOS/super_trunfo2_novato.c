#include <stdio.h>

int main (){

//Entrada de dados da primeira carta.

    int carta = 1;
    char estado = 'A';
    char codigo[3] = "A01";
    char cidade[12] = "São Paulo";
    int populacao = 12325000;
    double area = 1521.11;
    double pib = 699280000000;
    int ponto = 50;
    float densid_pop = populacao / area;   //add novas variaveis
    float pib_per_capita = pib / populacao;


//Impressão de Dados na tela

    printf("############################### \n");
    printf("Carta: %d \n\n", carta);
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("Populacao: %d \n", populacao);
    printf("Area: %f  km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d \n", ponto);
    printf("Densidade Populacional: %.2f hab/km² \n", densid_pop);    //adicionando novo print
    printf("PIB Per Capita: %.2f reais \n\n\n", pib_per_capita);

//Entrada de dados da segunda carta.

    int carta2 = 2;
    char estado2 = 'B';
    char codigo2[3] = "B02";
    char cidade2[16] = "Rio de Janeiro";
    int populacao2 = 6748000;
    double area2 = 1200.25;
    double pib2 = 300500000000;
    int ponto2 = 30;
    float densid_pop2 = populacao2 / area2;   //add novas variaveis
    float pib_per_capita2 = pib2 / populacao2;

//Impressão de Dados na tela

    printf("############################### \n");
    printf("Carta: %d \n\n", carta2);
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %2.f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Numero de Pontos Turisticos: %d \n", ponto2);
    printf("Densidade Populacional: %.2f hab/km² \n", densid_pop2);  //adicionando novo print
    printf("PIB Per Capita: %.2f reais \n\n\n", pib_per_capita2);

//DESAFIO NOVATO

    if(pib > pib2){
        printf("O PIB da Carta 1 é maior do que o PIB da Carta 2.\n");
        printf("Carta 1 venceu!!!\n");
    } else {
        printf("O PIB da Carta 2 é maior do que o PIB da Carta 1.\n");
        printf("Carta 2 venceu!!!\n");
    }


    return 0;
}