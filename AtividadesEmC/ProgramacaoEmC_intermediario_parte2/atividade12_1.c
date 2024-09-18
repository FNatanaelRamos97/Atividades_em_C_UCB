/*
12 - Crie um programa que leia um número inteiro fornecido pelo usuário e conte 
quantos dígitos esse número possui.
*/

#include <stdio.h>

int main(){

    int num, i = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num == 0){
        i = 1;
    }
    else{

        if(num < 0){
            num = -num;
            printf("%d\n", num);
        }

        while (num > 0){
            num/=10;
            printf("%d\n", num);
            i++;
        }
        
    }

    printf("O numero tem %d digitos. \n", i);
    return 0;
}