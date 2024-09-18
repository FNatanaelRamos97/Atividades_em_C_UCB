/*
2 – Escreva um programa que leia um número inteiro e imprima a sua tabuada de 
multiplicação de 1 a 10.
*/

#include<stdio.h>

int main(){
	
	int i = 1, num;
	
	printf("Digite o valor da para imprimir a tabuada:");
	scanf("%d", &num);
	
	while(i <= 10){
		
		printf("O resultado e: %d * %d = %d \n",num, i, num*i );
		
		i++;
	}
	
	return 0;
	
}
