/*
 8 - Faça um programa que calcule o valor a ser pago em uma conta de energia elétrica,
sabendo que o preço por KWh é fixo (0.50) e deve ser armazenado em uma constante. O
programa deve apresentar a seguinte mensagem (O valor da conta de energia é: R$
<valor>). Observação: o valor final deve possuir três casas decimais.
 */

#include <stdio.h>
#include <stdlib.h>

#define kwh 0.50

int main(){

	float horas, valorTotal;

	printf("Digite a quantidade de horas coletada: ");
	scanf("%f", &horas);

	valorTotal = kwh * horas;

	printf("O valor da conta de enegia é: R$ %.3f",valorTotal);

	return 0;
}
