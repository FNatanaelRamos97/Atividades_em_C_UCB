/*
1 - Faça um programa que receba um número e informe se ele é positivo, negativo ou 
zero.
*/

#include <stdio.h>

int main(){
	
	float num;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	if(num > 0){
		printf("Este numero e positivo!");
	}
	else if(num == 0){
		printf("Numero igual a zero!");
	}
	else{
		printf("Este numero e negativo");
	}
	
	return 0;
}
