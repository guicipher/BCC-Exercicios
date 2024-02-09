//Fazer um algoritmo para ler os valores dos coeficientes A, B e C de uma equação quadrática. Calcular e imprimir o valor do discriminante.

#include <stdlib.h>
#include <stdio.h>

int main(void){

    float A,B,C;

    printf("Digite o valor do coeficiente A, B e C");
    scanf("%f %f %f",&A,&B,&C);

    float delta = (B*B) - 4 * A * C;

    printf("O valot do delta é %f", delta);

    return 0;
}