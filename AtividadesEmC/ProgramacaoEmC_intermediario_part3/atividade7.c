/*
7 – Escreva um programa para criar uma pirâmide com um asterisco.
*/
#include<stdio.h>

int main(){
    int i, j, star, numLinhas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &numLinhas);

    //Laço principal que define o tamanho da árvore
    for(i=1; i<=numLinhas;i++){
        
        //Laço que define o espaçamento
        for(j=1; j<=numLinhas-i; j++){
            printf(" ");
        }

        //Laço que desenha a árvore
        for(star=1; star<=i; star++){
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}