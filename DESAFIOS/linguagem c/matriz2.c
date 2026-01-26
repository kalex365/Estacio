#include <stdio.h>
#define linha 5
#define coluna 5

int main() {
    int matriz [linha][coluna];
    int soma = 0;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            soma ++;
            matriz [i][j] = soma;
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}