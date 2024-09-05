/*
8 - Escreva um programa que leia o salário de uma pessoa e calcule o imposto de renda 
baseado na tabela abaixo
*/

#include <stdio.h>

int main(){

    float salario, imposto;

    printf("Digite os seu salario: ");
    scanf("%f",&salario);

    if(salario > 4000){
        imposto =(salario*0.20);
        salario = salario - imposto;
        printf("Voce pagara 20%% de imposto\n");
        printf("O valor do imposto e de %.2f\n",imposto);
        printf("O seu novo salario e de %.2f\n",salario);
    }
    else if(salario <= 2000){
        printf("Voce esta insento");
    }
    else{
        imposto =(salario*0.20);
        salario = salario - imposto;
        printf("Voce pagara 10%% de imposto\n");
        printf("O valor do imposto e de %.2f\n",imposto);
        printf("O seu novo salario e de %.2f\n",salario);
    }

    return 0;
}