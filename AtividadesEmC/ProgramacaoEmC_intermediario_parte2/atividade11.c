/*
11 - Implemente um jogo de adivinhação onde o programa gera um número aleatório 
entre 1 e 10, e o usuário deve tentar adivinhar qual é o número. O programa deve informar 
se o número fornecido pelo usuário é maior ou menor do que o número gerado, até que 
ele acerte.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int x, y;
    char opcao = 's';

    srand((unsigned)time(NULL));

    while(opcao == 's'){
    printf("Digite um numero de 1 a 10: ");
    scanf("%d", &y);

   
    x = 1+(rand()%10);

    if(x > y){
        printf("O numero que voce digitou foi: %d\n", y);
        printf("O numero escolhido foi: %d\n", x);
        printf("Entao %d e maior que %d \n",x, y);
    }
    else if(x < y){
        printf("O numero que voce digitou foi: %d\n", y);
        printf("O numero escolhido foi: %d\n", x);
        printf("Entao %d e menor que %d \n",x, y);
    }
    else{
        printf("PARABENS, Voce acertou o numero!\n");
    }

    getchar(); 

    printf("Deseja continuar: ");
    scanf("%c", &opcao);
    

    }
    return 0;
}