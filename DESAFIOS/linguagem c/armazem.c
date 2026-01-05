#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura:  \n");
    scanf("%f", &temperatura);
    printf("Entre com a Umidade:  \n");
    scanf("%f", &umidade);
    printf("Entre com o Estoque:  \n");
    scanf("%u", &estoque);

    if (temperatura > 30 ){
        printf("Temperatura está alta!\n");
    } else {
        printf("Temperatura está OK!\n");
    }

    if (umidade < 50 ){
        printf("Umidade está fora dos parâmetros!\n");
    } else {
        printf("Umidade está OK!\n");
    }

    if (estoque < estoqueMinimo ){
        printf("Estoque abaixo do padrão!\n");
    } else {
        printf("Estoque está OK!\n");
    }

    return 0;
}