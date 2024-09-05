/*
 9 – Escreva um programa que calcule o valor total a ser pago pelo combustível. O
programa deve definir uma constante para o preço do combustível por litro (R$ 5.79) e
pedir ao usuário a quantidade de litros abastecidos.
*/

#include <stdio.h>
#include <stdlib.h>
#define valorCombustivel 5.79

int main(){

	float totalPagar, quantidadeLitro;

	printf("Digite a quantidade de litros colocada no veiculo: ");
	scanf("%f",&quantidadeLitro);

	totalPagar = valorCombustivel*quantidadeLitro;

	printf("Valor total é de: R$ %.2f",totalPagar);

	return 0;

}
