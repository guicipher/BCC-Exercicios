//Peça ao usuário para digitar três números float, e em seguida, calcule e exiba a média aritmética desses números.

#include <stdlib.h>
#include <stdio.h>

int main(void){

    float n1,n2,n3;

    printf("Digite três números floats: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("A média entre eles é : %0.2f", (n1+n2+n3)/3);

    return 0;
}