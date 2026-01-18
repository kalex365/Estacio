#include <stdio.h>

int main() {

    //********** torre ***********
    printf("Torre Movimentando...\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
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