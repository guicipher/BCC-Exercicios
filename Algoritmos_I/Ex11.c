//Peça ao usuário para digitar uma temperatura em graus Celsius e, em seguida
//exiba a temperatura equivalente em graus Fahrenheit.

#include <stdlib.h>
#include <stdio.h>

int main(void){

    float temp,fahr;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temp);

    fahr = 1.8 * temp + 32;

    printf("Essa é a conversão para Fahrenheit: %0.2f", fahr);

    return 0;
}