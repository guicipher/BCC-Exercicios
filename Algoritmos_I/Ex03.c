//Escreva um programa que realiza este cálculo e exibe o valor correto com a mensagem na tela:
//vamos distribuir 359 carros para 4 pessoas e portanto devem sobrar ___ carros.

#include <stdlib.h>
#include <stdio.h>

int main(void){

    printf("Vamos distribuir 359 carros para 4 pessoas e portanto devem sobrar %d carros", 359 % 4);
    
    return 0;
}