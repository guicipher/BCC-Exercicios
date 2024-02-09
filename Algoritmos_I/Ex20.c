//Escreva um programa que solicita um número e exibe a mensagem "SENAC"
//se este número for 14,24,23,32 ou 33

#include <stdlib.h>
#include <stdio.h>

int main(void){

    int num;

    printf("Digite seu número: ");
    scanf("%d", &num);

    if(num == 14 || num == 24 || num == 23 || num == 32 || num == 33)
        printf("SENAC");

    return 0;
}