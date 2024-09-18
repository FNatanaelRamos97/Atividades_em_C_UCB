/*
3 – Desenvolva um programa que solicite ao usuário quantos números ele deseja inserir 
e, em seguida, calcule e exiba a média desses números.
*/

#include<stdio.h>

int main(){
	
	int i = 1, num, controlador, soma;
	
	printf("Digite a quantidade de numeros desejados: ");
	scanf("%d", &controlador);
	
	while(i <= controlador){
		
		printf("Insira o valor do numero %d: ", i );
		scanf("%d", &num);
		
		soma += num;
		
		i++;
	}
	
	printf("O valor da media e: %d", soma/controlador);
	
	return 0;
	
}
