/*
4 - Escreva um programa que leia uma string (conjunto de caracteres) do usuário e copie
a para outra string. Em seguida, exiba a string copiada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char nome1[50], nome2[50];
	
	printf("Digite o primeiro nome: ");
	fgets(nome1, sizeof(nome1), stdin);
	//scanf("%s", &nome1);
	
	strcpy(nome2,nome1);
	
	
	printf("O nome e: %s", nome2);
	
	return 0;
}
