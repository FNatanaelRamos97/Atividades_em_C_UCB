/*
5 � Escreva um programa que leia uma s�rie de n�meros inteiros fornecidos pelo 
usu�rio. O programa deve parar de ler os n�meros assim que encontrar o primeiro 
n�mero par e, em seguida, exibir esse n�mero par. Caso o usu�rio insira apenas 
n�meros �mpares, o programa deve exibir uma mensagem informando que nenhum 
n�mero par foi encontrado.  
*/

#include <stdio.h>

int main(){
	int num, qtd, i;
	
	printf("Quantos numeros voce deseja inserir? ");
	scanf("%d", &qtd);
	
	for(i=1; i<=qtd; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		
		if(num%2 == 0){
			printf("O primeiro numero par encontrado e: %d",num);
			break;
		}
		if(i == qtd) {
			printf("Nenhum numero par foi encontrado");
		}
	}
	
	
	return 0;
}
