/*
1 � Crie um programa que receba tr�s valores (�a�, �b� e �c�), que s�o os coeficientes de 
uma equa��o do segundo grau, e retorne para o usu�rio o valor de delta, dado por (b� -
4ac).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float a, b, c, delta;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &a);
	
	printf("Digite o segundo Valor: ");
	scanf("%f", &b);
	
	printf("Digite o terceiro valor: ");
	scanf("%f", &c);
	
	delta = (b*b)-4*a*c;
	
	printf("O valor de DELTA e: %.0f", delta);
	
	return 0;
	

	
}
