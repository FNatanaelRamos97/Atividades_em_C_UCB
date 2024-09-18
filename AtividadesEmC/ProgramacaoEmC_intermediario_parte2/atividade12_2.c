/*
12 - Crie um programa que leia um número inteiro fornecido pelo usuário e conte 
quantos dígitos esse número possui.


Contagem feita com STRING
*/

#include <stdio.h>
#include <string.h>

int main(){

    int i = 0, digito, j = 1;
    char qtd[100];

    printf("Digite um numero: ");
    fgets(qtd, sizeof(qtd), stdin);

    qtd[strcspn(qtd, "\n")] = '\0';

    

    while(i <= 100){
        if (qtd[i] == '-'){
            digito = strlen(qtd)-j;
            j++;
        }

        if (qtd[i] == '.'){
            digito = strlen(qtd)-j;
            j++;
        } 
        else if(digito == 0){
            digito = strlen(qtd);
        }

        i++;    
    }

    printf("O numero tem %d digitos. \n", digito);
    return 0;
}