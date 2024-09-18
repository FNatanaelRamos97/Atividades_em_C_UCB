/* 
7 – Implemente um programa que leia números inteiros fornecidos pelo usuário até que 
ele digite o valor 0. Ao final, o programa deve exibir a soma de todos os números 
digitados.
*/

#include <stdio.h>

int main(){

    int total, num, i;

    do{
        i++;
        printf("Digite o numero %d: ", i);
        scanf("%d", &num);
        total+=num;
    }while(num != 0);

    printf("A soma dos numeros e de: %d \n", total);

    return 0;
}