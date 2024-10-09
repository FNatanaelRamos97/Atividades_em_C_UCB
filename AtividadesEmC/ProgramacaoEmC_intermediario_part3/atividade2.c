/*
2 - Escreva um programa que seja capaz de gerar os N termos dessa série. Esse número N 
deve ser a entrada do programa. Conforme a entrada a seguir:
*/

#include<stdio.h>

int main(){
	int n, soma, i, j, cont = 1;
	
	printf("Digite o numero de termos que serao impressos na tela: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
			
		printf("%3d", cont);
		soma=cont+3;
		
		for(j = 1; j <= 2; j++){
			printf("%3d", soma);
			i++;
		}
		cont++;
		
	}
	
	return 0;
}
