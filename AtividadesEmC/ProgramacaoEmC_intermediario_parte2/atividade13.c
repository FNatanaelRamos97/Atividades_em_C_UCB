/*
13 – Escreva um programa que solicite uma senha numérica ao usuário verifique se a ela 
está correta. O programa deve permitir até 5 tentativas para inserir a senha correta. Caso 
o limite de tentativas seja atingido sem sucesso, o programa deve ser encerrado.
*/

#include<stdio.h>

int main(){

    int senha, tentativa = 1;

    printf("BEM-VINDO!\n");
    printf("Digite a sua senha: ");
    scanf("%d", &senha);

    if(senha == 54321){
        printf("Bem vindo ao menu inicial!\n");
    }
    else{

        tentativa++;

        while (tentativa <= 5){

            printf("Sua senha esta incorreta! Digite novamente: ");
            scanf("%d", &senha);

            if(senha == 54321){
                printf("Bem vindo ao menu inicial!\n");
                break;
            }    
            else if(tentativa == 5){
                printf("Numero de tentativas excedido\n");
            }

            tentativa++;
            

        }
        
    }

    return 0;
}