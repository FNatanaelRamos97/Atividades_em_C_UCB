/*
5 â€“ Escreva um programa que leia o nome completo (nome e sobrenome) e a idade de
uma pessoa e depois imprima esses dados da seguinte forma (OlÃ¡ <nome_completo>,
seja bem-vindo ao curso de Algoritmos e ProgramaÃ§Ã£o Estruturada. VocÃª tem <idade>
anos de idade!).

 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char nomeCompleto[20];
	int idade;

	printf("Digite seu nome completo: ");
	fgets(nomeCompleto, sizeof(nomeCompleto), stdin); //To accept empty space

        nomeCompleto[strcspn(nomeCompleto, "\n")] = '\0'; //This function is to remove the character '\n'

	printf("Digite sua idade: ");
	scanf("%d",&idade);

	printf("\nOlá %s!Seja bem-vindo ao curso de Algoritmos e Programacao Estruturada.\nVoce tem %d anos de idade",nomeCompleto,idade);


	return 0;
}
