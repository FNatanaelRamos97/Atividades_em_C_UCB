/*
6 – Desenvolva um programa que exiba todos os números pares de 0 a 1000.
*/

#include <stdio.h>

int main(){

    int i = 0;

    while(i <= 1000){

        if(i%2 == 0){
            printf("O numero %d e par\n", i);
        }

        i++;
    }

    return 0;

}