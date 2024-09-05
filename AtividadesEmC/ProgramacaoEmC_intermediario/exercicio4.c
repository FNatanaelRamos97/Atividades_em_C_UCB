/*
4 – Crie um programa que leia um número fornecido pelo usuário e informe se ele é par 
ou ímpar.
*/

#include <stdio.h>

int main(){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	
	if(num%2 == 0){
		printf("O numero e par");
	}
	else{
		printf("O numero e impar");
	}
	
	return 0;
}
