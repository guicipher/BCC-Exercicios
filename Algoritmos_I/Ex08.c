//Escreva um programa que ajude os alunos a calcularem as notas desta disciplina. O programa deve perguntar
//as notas da primeira e da segunda prova, calcular a média aritmética entre elas, e exibir na tela.

#include <stdlib.h>
#include <stdio.h>

int main(void){

    float prova1,prova2;

    printf("Qual foi a nota da sua primeira prova?");
    scanf("%f",&prova1);

    printf("E da segunda prova?");
    scanf("%f",&prova2);

    printf("A sua média é %0.2f", (prova1+prova2)/2.0);

    return 0;
}