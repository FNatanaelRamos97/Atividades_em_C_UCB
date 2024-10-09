/*
5 – Escreva um programa que leia uma série de números inteiros fornecidos pelo 
usuário. O programa deve parar de ler os números assim que encontrar o primeiro 
número par e, em seguida, exibir esse número par. Caso o usuário insira apenas 
números ímpares, o programa deve exibir uma mensagem informando que nenhum 
número par foi encontrado.  
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
