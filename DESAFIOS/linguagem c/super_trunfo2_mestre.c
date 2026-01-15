#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{

//Entrada de dados da primeira carta.

    int carta = 1;
    char estado = 'A';
    char codigo[4] = "A01";
    char cidade[12] = "São Paulo";
    int populacao = 12325000;
    double area = 1521.11;
    double pib = 699280000000;
    int ponto = 50;
    float densid_pop = populacao / area;   //add novas variaveis
    float pib_per_capita = pib / populacao;
    float super_poder_A = populacao + area + pib + pib_per_capita;
    char primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;
    int ataque1, defesa1, recuo1, ataque2, defesa2, recuo2;


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



    //menu inicial
    printf("Bem Vindo ao Jogo!\n");
    printf("Escolha o primeiro atributo.\n\n");
    printf("A - Ataque.\n");
    printf("D - Defesa\n");
    printf("R - Recuo.\n\n");
    printf("Escolha a Comparação: \n");
    scanf("%c", &primeiroAtributo);
//***************************************************************** */
    switch (primeiroAtributo)
    {
    case 'A':
    case 'a':
        printf("Você escolhe a opção ATAQUE!");
        resultado1 = ataque1 > ataque2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("Você escolhe a opção Defesa!");
        resultado1 = defesa1 > defesa2 ? 1 : 0;
        break;
    case 'R':
    case 'r':
        printf("Você escolhe a opção RECUO!");
        resultado1 = recuo1 > recuo2 ? 1 : 0;
        break;
        
    default:
        printf("Opção Inválida!!!!\n");
        break;
    }
    //******************************************************/
    printf("Escolha o segundo atributo.\n\n");
    printf("A - Ataque.\n");
    printf("D - Defesa\n");
    printf("R - Recuo.\n\n");
    printf("Escolha a Comparação: \n");
    scanf("%c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    { 
        printf("Você escolheu o mesmo atributo!!!");
    } else {
        switch (segundoAtributo)
        {
        case 'A':
        case 'a':
            printf("Você escolhe a opção ATAQUE!");
            resultado2 = ataque1 < ataque2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolhe a opção Defesa!");
            resultado2 = defesa1 < defesa2 ? 1 : 0;
            break;
        case 'R':
        case 'r':
            printf("Você escolhe a opção RECUO!");
            resultado2 = recuo1 < recuo2 ? 1 : 0;
            break;
            
        default:
            printf("Opção Inválida!!!!\n");
            break;
        }
    }
    if (resultado1 && resultado2 == 1) {
        printf("YOU WIN!!!");
    } else if (resultado1 != resultado2) {
        printf("Empatou!!!");
    } else {
        printf("YOU LOOSER");
    }



    return 0;
}
//Fim do programa