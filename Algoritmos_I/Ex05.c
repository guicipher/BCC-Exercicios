//Escreva um algoritmo para calcular o consumo médio de um automóvel (medido em km/l), dado que são conhecidos a distância total
//percorrida e o volume de combustível consumido para percorrê-la (medido em litros).

#include <stdlib.h>
#include <stdio.h>

int main(void){

    int litros,km;

    printf("Digite quantos quilometros o carro percorreu?\n");
    scanf("%d",&km);

    printf("Digite quantos litros foram gastos?\n");
    scanf("%d",&litros);

    printf("O carro faz %d km/l", km/litros);

    return 0;
}