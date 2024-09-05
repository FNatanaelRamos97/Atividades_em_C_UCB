/*
2 - Faça um programa que receba dois números e mostre o maior.
*/

#include <stdio.h>

int main(){
	
	float num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	if(num1 > num2){
		printf("O primero numero e o maior");
	}else{
		printf("O segundo numero e o maior");
	}
	
	return 0;
}
