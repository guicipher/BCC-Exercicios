//Faça um algoritmo que receba um número e mostre a mensagem "Sim"
//caso este número seja maior que 10. Se for menor ou igual
//o programa deve encerrar sem exibir nada.

#include <stdlib.h>
#include <stdio.h>

int main(void){

    int num;

    printf("Digite algum número: ");
    scanf("%d",&num);

    if(num > 10)
        printf("Sim!");

    return 0;
}