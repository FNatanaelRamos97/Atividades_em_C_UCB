/* 
4 – Construa um programa para encontrar o maior e o menor número de uma série de 
números positivos fornecidos pelo usuário.
*/

#include<stdio.h>

int main(){
    int qtdNumeros, maiorNumero = 0, menorNumero = 1000000, num, i;

    printf("Quantos numeros voce deseja inserir: ");
    scanf("%d", &qtdNumeros);

    for(i = 1; i <= qtdNumeros; i++){
        printf("Digite um numero positivo: ");
        scanf("%d", &num);

        if(num > maiorNumero){
            maiorNumero = num;
        }
        if(num < menorNumero){
            menorNumero = num;
        }
    }
    printf("O maior numero e: %d\nO menor numero e: %d\n ", maiorNumero, menorNumero);


    return 0;
}