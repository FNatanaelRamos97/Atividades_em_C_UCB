/*
 7 –Crie um programa que calcule a circunferência de um círculo. Utilize uma constante
para o valor de Pi. O programa deve apresentar a seguinte mensagem (A circunferência
do círculo é: <circunferencia>).
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	const float pi = 3.14;
	float c, r;

	printf("Digite o raio da ecircunferencia: ");
	scanf("%f", &r);

	c = 2*pi*r;

	printf("A circunferencia do circulo é: %.2f", c);

	return 0;

}
