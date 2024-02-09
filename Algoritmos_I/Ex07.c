//Crie um programa que calcula o volume de um cilindro, solicitando que o usuário
//digite apenas a medida do raio e a altura do mesmo

#include <stdlib.h>
#include <stdio.h>

int main(void){

    int raio,altura;

    printf("Qual é a medida do raio do cilindro?");
    scanf("%d", &raio);

    printf("Qual é a altura do cilindro?");
    scanf("%d", &altura);

    printf("Seu cilindro tem como volume %0.2f", (raio*raio*3.1415) * altura);

    return 0;
}