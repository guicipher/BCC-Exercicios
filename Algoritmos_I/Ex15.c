//Escrever um algoritmo que leia dois valores inteiros
//distintos e informe qual deles é o maior.

#include <stdlib.h>
#include <stdio.h>

int main(void){

    int num1,num2;

    printf("Digite seus dois números: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
        printf("O %d é maior", num1);

    else
        printf("O %d é maior", num2);

    return 0;
}