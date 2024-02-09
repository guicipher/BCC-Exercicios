//Em uma festa homens pagam 20 reais de entrada e as mulheres pagam 17. Crie um programa que pergunta quantos homens
//e quantas mulheres participam da festa e calcula o valor total arrecadado com as entradas

#include <stdlib.h>
#include <stdio.h>

int main(void){

    int homens,mulheres;

    printf("Quantos homens foram para a festa?");
    scanf("%d",&homens);

    printf("Quantas mulheres foram para a festa?");
    scanf("%d",&mulheres);

    printf("O total arrecadado foi %d R$", (homens * 20) + (mulheres * 17));

    return 0;
}