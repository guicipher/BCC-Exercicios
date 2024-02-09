//Escreva um programa que solicita um número e então exibe 0 se o número
//for par, e 1 se o número for impar. (Não utilize o comando IF ainda).

#include <stdlib.h>
#include <stdio.h>

int main(void){

    int num;

    printf("Digite um número: ");
    scanf("%d",&num);

    printf("%d", num % 2);
}