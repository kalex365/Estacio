#include <stdio.h>

int main () {

    int numero, i;

    printf("Digite o número da Tabuada: \n");
    scanf("%d", &numero);

    for ( i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, i * numero);
    }
    


    return 0;
}