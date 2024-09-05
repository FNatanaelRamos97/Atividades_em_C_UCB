/*
3 - Crie um programa que peça ao usuário para inserir uma base e um expoente, e 
calcule a potência correspondente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float base, exp, resul;
	
	printf("Digite a base: ");
	scanf("%f", &base);
	
	printf("Digite o expoente: ");
	scanf("%f", &exp);
	
	resul = pow(base,exp);
	
	printf("O resultado e: %.0f", resul);
	
	return 0;
}

