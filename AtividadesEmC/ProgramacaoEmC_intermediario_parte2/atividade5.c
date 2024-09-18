/* 
5 – Escreva um programa que receba um número de 1 a 7 e exiba o dia da semana 
correspondente (1 para Domingo, 2 para Segunda-feira, etc.). Se o número não for fora 
do intervalo de 1 a 7, o programa deve exibir uma mensagem “Número inválida”.
*/

#include <stdio.h>

int main(){

   int opcao;

   printf("Bom dia!; Boa tarde!; Boa noite.\n");
   printf("Digite um numero de 1 a 7 para escolher o dia da semana:");
   scanf("%d", &opcao);

   switch (opcao)
   {
   case 1:
    printf("O dia escolhido foi DOMINGO.\n");
    break;

    case 2:
    printf("O dia escolhido foi SEGUNDA-FEIRA.\n");
    break;

    case 3:
    printf("O dia escolhido foi TERÇA-FEIRA\n");
    break;

    case 4:
    printf("O dia escolhido foi QUARTA-FEIRA\n");
    break;

    case 5:
    printf("O dia escolhido foi QUINTA-FEIRA\n");
    break;

    case 6:
    printf("O dia escolhido foi SEXTA-FEIRA\n");
    break;
   
    case 7:
    printf("O dia escolhido foi SABADO\n");
    break;
   
    default:
    printf("Opcao invalida.\n");
    break;
   } 

   return 0;
}