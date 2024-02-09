//Escreva um programa que converta um intervalo de tempo dado em segundos
//em horas, minutos e segundos.

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int horas = 0,minutos = 0,segundos = 0,segundosTotal;

    printf("Digite o seu tempo em segundos: ");
    scanf("%d", &segundosTotal);

    horas = segundosTotal / 3600;

    segundosTotal = segundosTotal - horas*3600;

    minutos = segundosTotal / 60;

    segundosTotal = segundosTotal - minutos*60;

    segundos = segundosTotal % 60;

    printf("%d h %d min %d s.",horas, minutos, segundos);

}