/*
7 – Crie um programa que determine se um número fornecido pelo usuário é primo ou 
não.
*/

#include <stdio.h>

int main(){

    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);

    if((num>0 && num<4) || num==5 || num==7 || num==9 || num==11 || num==13){
        printf("O numero %d e primo ",num);
    }
    else if (num%2 == 0 ||  num%3 == 0|| num%5 == 0 || num%7 == 0 || num%11==0 || num%13==0){
        printf("Este numero nao e primo.");
    }
    else{
        printf("Este numero e primo.");
    }
    
    

    return 0;
}