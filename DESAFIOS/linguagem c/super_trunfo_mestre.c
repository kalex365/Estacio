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
    float super_poder_A = populacao + area + pib + pib_per_capita;


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
    printf("PIB Per Capita: %.2f reais \n", pib_per_capita);
    printf("SUPER PODER: %.2f\n\n\n", super_poder_A);

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
    float super_poder_B = populacao2 + area2 + pib2 + pib_per_capita2;

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
    printf("PIB Per Capita: %.2f reais \n", pib_per_capita2);
    printf("SUPER PODER: %.2f\n\n\n", super_poder_B);



    //COMPARAÇÕES

    float rpopulacao, rarea, rpib, pturist, rdensidade, rpibpcap, rsuper;

    rpopulacao = populacao > populacao2;
    rarea = area > area2;
    rpib = pib > pib2;
    pturist = ponto > ponto2;
    rdensidade = densid_pop < densid_pop2 / 1;
    rpibpcap = pib_per_capita > pib_per_capita2;
    rsuper = super_poder_A > super_poder_B;

    printf("População: %.1f\nÁrea: %.1f\nPIB: %.1f\nPontos Turísticos: %.1f\nDensidade Populacional: %.1f\nPib Per Capita: %.1f\nSUPER PODER: %.1f\n", rpopulacao, rarea, rpib, pturist, rdensidade, rpibpcap, rsuper);

    return 0;
}
//Fim do programa