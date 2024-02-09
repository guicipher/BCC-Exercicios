//Crie um programa que recebe um número inteiro e informa
//se este número é múltiplo de 10

#include <stdlib.h>
#include <stdio.h>

int main(void){

    int num;

    printf("Infome o seu número: ");
    scanf("%d", &num);

    if(num % 10 == 0)
        printf("O número %d é múltiplo de dez", num);

    else
        printf("O número %d não é múltiplo de dez", num);

    return 0;
}