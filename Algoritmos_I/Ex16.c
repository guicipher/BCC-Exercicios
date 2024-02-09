//Altere o exercício anterior da forma que ele informe
//também se eles são iguais

#include <stdlib.h>
#include <stdio.h>

int main(void){

    int num1,num2;

    printf("Digite seus dois números: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
        printf("O %d é maior", num1);

    else{
        if(num1 == num2){
            printf("Eles são iguais");
        }

        else
            printf("O %d é maior", num2);
    }
    return 0;
}