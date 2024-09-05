/*
2 –Crie um programa que leia dois números de ponto flutuante, calcule e exiba a soma, 
subtração, multiplicação e divisão deles
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float num1, num2, total;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	total = num1+num2;
	printf("A soma e: %.0f\n", total);
	
	total = num1-num2;
	printf("A subtracao e: %.0f\n", total);
	
	total = num1*num2;
	printf("A multiplicacao e: %.0f\n", total);
	
	total = num1/num2;
	printf("A divisao e: %.0f \n", total);
	
	return 0;
}
