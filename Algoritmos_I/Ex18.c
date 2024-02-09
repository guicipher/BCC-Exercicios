//Crie um programa que recebe dois números inteiros. Exiba a mensagem "sim"
//apenas caso ambos sejam maiores que 10.

#include <stdlib.h>
#include <stdio.h>

int main(void){

    int num1,num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if(num1 > 10 && num2 > 10)
        printf("sim");

    return 0;
}