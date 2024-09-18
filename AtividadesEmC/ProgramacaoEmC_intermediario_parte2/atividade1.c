/*
1 – Escreva um programa que receba um número inteiro positivo e calcule o seu fatorial.
*/

#include<stdio.h>

int main(){
	
	int i = 1, num = 1, total = 1;
	
	printf("Digite o fatorial desejado:");
	scanf("%d", &num);
	
	do{
		
		total *= i;
		i++;
		
	}while(i <= num);
	
	printf("O resultado e: %d", total);
	
	return 0;
	
}


