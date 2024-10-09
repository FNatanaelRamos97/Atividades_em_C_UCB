/*
1 - Faça um programa que leia um número inteiro N e que indique quantos valores 
inteiros e positivos devem ser lidos a seguir. Para cada número lido, mostre o valor lido 
e o fatorial desse valor.
*/
#include <stdio.h>

int main(){
	int n, valor, fatorial = 1, i, j;
	
	printf("Digite quantos valores inteiros positivos deseja inserir: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		printf("Digite o %d valor positivo: ", i);
		scanf("%d", &valor);
		
		for(j = 1; j <= valor; j++){
			fatorial *= j;
		}
		printf("Valor: %d | Fatorial: %d \n", valor, fatorial);
		
		fatorial = 1;
	}
	
	
	return 0;
}
