/*
15 - Escreva um programa que exiba um menu com as opções: 1. Exibir mensagem; 2. 
Calcular quadrado de um número; 3. Calcular cubo de um número. O usuário deve 
escolher uma opção e, dependendo da escolha, o programa deve executar a ação 
correspondente.
*/

#include<stdio.h>
#include<math.h>

int main(){

    int opcao = 0;
    float num = 0;

    printf("Seja bem-vindo\n");
    printf("Selecione uma opcao. \n");
    printf("1 - Exibir menssagem.\n");
    printf("2 - Calcular o quadrado de um numero inteiro. \n");
    printf("3 - Calcular o cubo de um numero inteiro. \n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
    printf("Ola mundo!\n");
    break;

    case 2:
    printf("Digite o numero desejado: ");
    scanf("%f", &num);
    num = pow(num,2);
    printf("\nO quadrado do numero e: %.2f \n", num);
    break;
    
    case 3:
    printf("Digite o numero desejado: ");
    scanf("%f", &num);
    num = pow(num,3);
    printf("\nO cubo do numero e: %.2f \n", num);
    break;

    default:
    printf("Opcao invalida\n");
    break;
    }

    return 0;
}