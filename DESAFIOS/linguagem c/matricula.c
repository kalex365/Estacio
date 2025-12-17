#include <stdio.h>

int main (){

    int idade, matricula;
    float altura;
    char aluno[50];

    printf("Digite a sua idade: \n");
    scanf("&d", &idade);

    printf("Digite a sua altura: \n");
    scanf("&f", &altura);    

    printf("Digite o seu nome: \n");
    scanf("&s", &aluno);

    printf("Digite a sua matricula: \n");
    scanf("&d", &matricula);    

    printf("nome do aluno: &s - Matrícula: &d \n", aluno, matricula);
    printf("Idade: &d - Altura: &2.f \n", idade, altura);

    return 0;

}