/*
4 � Crie um programa que leia um n�mero fornecido pelo usu�rio e informe se ele � par 
ou �mpar.
*/

#include <stdio.h>

int main(){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	
	if(num%2 == 0){
		printf("O numero e par");
	}
	else{
		printf("O numero e impar");
	}
	
	return 0;
}
