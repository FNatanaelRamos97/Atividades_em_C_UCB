/*
8 –Crie um programa que leia uma sequência de números inteiros positivos e, para cada 
número, acumule as somas separadamente para os números ímpares e pares. O 
programa deve continuar até que o usuário insira um número negativo.
*/

#include <stdio.h>

int main(){

    int somaImpar, somaPar, i, num;

    while(num>=0){
        i++;
        printf("Digite o numero %d: ", i);
        scanf("%d", &num);
        
        if(num%2 == 0 && num >= 0){
            somaPar+=num;
        }
        else if(num >= 0){
            somaImpar+=num;
        }
    }

    printf("A soma dos numeros pares e: %d\n", somaPar);
    printf("A soma dos numeros impares e: %d\n",somaImpar);

    return 0;

}