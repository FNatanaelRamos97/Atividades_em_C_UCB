/*
3 - Crie um programa que pe�a ao usu�rio para inserir uma base e um expoente, e 
calcule a pot�ncia correspondente.
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

