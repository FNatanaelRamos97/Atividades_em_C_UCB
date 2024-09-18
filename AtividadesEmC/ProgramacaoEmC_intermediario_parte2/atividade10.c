/*
10 – Crie um programa que leia a idade de várias pessoas até que seja informado o valor 
0. O programa deve contar quantas pessoas têm 18 anos ou mais, e quantas têm menos 
de 18 anos.
*/

#include<stdio.h>

int main(){

    int idade, maiorIdade, menorIdade;

    do{
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if(idade >= 18){
        maiorIdade++;
    }
    else if(idade >= 0 && idade < 18){
        menorIdade++;
    }
    else{
        printf("Idade invalida\n");
    }    

    }while(idade != 0);

    printf("Quantidade pessoas MAIOR DE IDADE: %d\n", maiorIdade);
    printf("Quantidade pessoas MENOR DE IDADE: %d\n", menorIdade);

    return 0;
}
