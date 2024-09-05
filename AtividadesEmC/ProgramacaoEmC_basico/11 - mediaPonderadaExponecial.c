/*
11 - Escreva um programa que calcule a média ponderada exponencial de três valores.
O coeficiente de suavização (alfa) será fornecido pelo usuário. Considere a seguinte
fórmula:

S(t) = ax(t)+(1-a)*S(t-1)

Atenção: o primeiro valor deverá ser tratado como a média inicial (sem histórico
anterior), e a fórmula será aplicada para os valores subsequentes. Ao final imprima a
média ponderada exponencial final.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	float ewma,a,x;

	printf("Digite o coeficiente de suavização alfa (o valor deve estar entre 0.0 e 0.1): ");
	scanf("%f",&a);

	printf("Digite a primeira média: ");
	scanf("%f",&ewma);

	printf("Digite o primeiro valor: ");
	scanf("%f",&x);

	ewma = (a*x)+(1-a)*ewma;
	printf("\n");

	printf("Digite o segundo valor: ");
	scanf("%f",&x);
	ewma = (a*x)+(1-a)*ewma;
	printf("\n");

	printf("Digite o terceiro valor: ");
	scanf("%f",&x);
	ewma = (a*x)+(1-a)*ewma;
	printf("\n");

	printf("O valor da média ponderada exponencial final é: %.2f",ewma);

	return 0;



}
