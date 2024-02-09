//Solicite que o usuário digite um número. Informe então se este número
// é par ou impar

#include <stdlib.h>
#include <stdio.h>

int main(void){

    int num;

    printf("Digite um número: ");
    scanf("%d",&num);

    if(num % 2 == 0)
        printf("Seu número é par!");

    else
        printf("Seu número é impar!");

    return 0;
}