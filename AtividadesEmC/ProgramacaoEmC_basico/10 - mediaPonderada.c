/*
10 - Crie um programa que solicita ao usuário três valores e seus respectivos pesos. Em
seguida, calcule a média ponderada.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	float media, nota1, peso1, nota2, peso2, nota3, peso3;

	printf("Digite a primeira nota de 0 a 10: ");
	scanf("%f",&nota1);
	printf("Digite o peso da primeira nota de 0.0 a 1.0:");
	scanf("%f",&peso1);
	printf("\n");

	printf("Digite a segunda nota de 0 a 10: ");
	scanf("%f",&nota2);
	printf("Digite o peso da segunda nota de 0.0 a 1.0:");
	scanf("%f",&peso2);
	printf("\n");

	printf("Digite a terceira nota de 0 a 10: ");
	scanf("%f",&nota3);
	printf("Digite o peso da terceira nota de 0.0 a 1.0:");
	scanf("%f",&peso3);
	printf("\n");

	media = (nota1*peso1)+(nota2*peso2)+(nota3*peso3);

	printf("A média é: %.2f", media);

	return 0;
}
