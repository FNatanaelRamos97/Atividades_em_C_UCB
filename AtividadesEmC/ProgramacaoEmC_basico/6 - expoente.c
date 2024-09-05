/*
6 - Faça um programa que receba um número informado pelo usuário e calcule o
quadrado deste número. Ao final apresente a seguinte mensagem (O número escolhido
foi <numero> e o seu quadrado é <numero_quadrado>.)
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

	float numero1, numero2;

	printf("Digite um numero: ");
	scanf("%f",&numero1);

	numero2 = pow(numero1,2);

	printf("O numero escolhido foi: %.0f. O seu quadrado e: %.0f",numero1,numero2);

	return 0;
}
