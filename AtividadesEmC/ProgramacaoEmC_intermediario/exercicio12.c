/*
12 - Faça um programa que receba o salário de um funcionário, calcule e mostre o novo 
salário desse funcionário, acrescido de bonificação e de auxílio-escola.
*/

#include <stdio.h>

#define ae1 150 //Auxilio escola menor ou igual a 600 reais
#define ae2 100 //Auxilio escola maior que 600 reais

int main(){

    float salario, novoSalario;

    printf("Digite o valor do salario: ");
    scanf("%f",&salario);

    if(salario<=500){
        novoSalario = (salario*0.05)+salario+ae1;
        printf("Seu novo salario e de: %.2f",novoSalario);
    }
    else if(salario<=600){
        novoSalario=(salario*0.12)+salario+ae1;
        printf("Seu novo salario e de: %.2f",novoSalario);
    }
    else if(salario<=1200){
        novoSalario=(salario*0.12)+salario+ae2;
        printf("Seu novo salario e de: %.2f",novoSalario);
    }
    else{
        novoSalario=salario+ae2;
        printf("Seu novo salario e de: %.2f",novoSalario);
    }

    return 0;
}