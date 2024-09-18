/*
9 – Desenvolva um programa que leia dois números inteiros e determine qual deles é o 
maior. O programa deve continuar solicitando novos números até que os dois valores 
inseridos sejam iguais.
*/

#include <stdio.h>

int main(){

    int num1, num2;

   do{
        printf("Digite o valor do primeiro numero: ");
        scanf("%d", &num1);

        printf("Digite o valor do segundo numero: ");
        scanf("%d", &num2);

        if(num1 > num2){
            printf("O primeiro numero, %d, e o maior\n", num1);
        }
        else if(num1 == num2){
            printf("Os numeros sao iguais\n");
        }
        else{
            printf("O segundo numero, %d, e o maior\n", num2);
        }
    } while(num1 != num2);

    return 0;
}