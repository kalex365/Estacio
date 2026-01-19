#include <stdio.h>

int main() {

    int move_cavalo = 1;

    //********** torre ***********
    printf("Torre Movimentando...\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    //********** cavalo ***********
    printf("\nCavalo Movimentando...\n");
    while (move_cavalo--)
    {
        for ( int i = 0; i < 2; i++)
        {
            printf("cima\n");
        }
        printf("direita\n");
        
    }
    //********** bispo ***********
    printf("\nBispo Movimentando...\n");
    for (int i = 0; i < 5; i++) {
        printf("diagonal para cima e à direita\n");
    }
    
    //********** rainha ***********
    printf("\nRainha Movimentando...\n");
    for (int i = 0; i < 8; i++) {
        printf("esquerda\n");
    }
    return 0;
}