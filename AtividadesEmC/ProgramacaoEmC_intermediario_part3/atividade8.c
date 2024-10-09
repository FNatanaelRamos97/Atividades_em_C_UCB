/*
8 – Escreva um programa para encontrar a soma da série 1 + 11 + 1111 + ... n termos.
*/

#include<stdio.h>

int main(){
    int i, qtdTermo; 
    long soma=0, numero=0;

    printf("Digite o numero de termos: ");
    scanf("%d", &qtdTermo);

    printf("A soma da série: ");

    for(i=1; i<=qtdTermo; i++){

        numero = numero*10+1;
        
        printf("%d ", numero);

        if(i == qtdTermo){
            printf("");
        }
        else{
            printf("+ ");
        }
        
        soma+=numero;
    }

    printf("\ne igual a %d: ", soma);

    return 0;
}