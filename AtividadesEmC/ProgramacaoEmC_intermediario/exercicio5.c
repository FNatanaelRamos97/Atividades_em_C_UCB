/*
5 – Escreva um programa que verifique se um ano informado pelo usuário é bissexto ou 
não.
*/

#include <stdio.h>

int main(){
	
	int ano;
	
	printf("Digite o ano: ");
	scanf("%d", &ano);
	
	
	if(ano%4 == 0 && ano%100 != 0 || ano%400 == 0){
		printf("O ano e bisexto");
	}
	else{
		printf("O ano nao e bisexto");
	}
	
	return 0;
}
