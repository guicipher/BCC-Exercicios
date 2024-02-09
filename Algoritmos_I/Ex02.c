//Escreva um programa que exibe na tela a seguinte mensagem:
//suas notas são ___ e ____ e sua média é ____
//(substituindo a parte sublinhada por três valores, sendo que o último é calculado).

#include <stdlib.h>
#include <stdio.h>

int main(void){

    printf("Suas notas são 5 e 8 e sua média é %0.2f", (5.0+8.0)/2.0);

    return 0;
}