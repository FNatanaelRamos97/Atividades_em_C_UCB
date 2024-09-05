/*
6 - Faça um programa que solicite ao usuário os comprimentos de três lados de um 
triângulo. Verifique se esses comprimentos formam um triângulo válido, ou seja, a soma 
de quaisquer dois lados deve ser maior que o terceiro lado. Se for válido, determine o 
tipo (equilátero, isósceles ou escaleno).
*/

#include <stdio.h>

int main(){
	
	float lado1, lado2, lado3;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &lado1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &lado2);
	
	printf("Digite o terceiro numero: ");
	scanf("%f", &lado3);
	
	if((lado1+lado2 > lado3) && (lado1+lado3 > lado2) && (lado2+lado3 > lado1)){
		printf("Triangulo valido\n");
		
		if(lado1==lado2 && lado1==lado3){
			printf("Esse triangulo e EQUILATERO");
		}
		else if(lado1==lado2 || lado1==lado3 || lado3==lado2){
			printf("Esse triangulo e ISOSCELES");
		}
		else{
			printf("Esse triangulo e ESCALENO");
		} 
	}
	else{
		printf("Medidas invalidas");
	}

	
	return 0;
}