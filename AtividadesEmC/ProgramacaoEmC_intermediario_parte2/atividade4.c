/*
4 � Desenvolva um programa que converta um valor monet�rio informado pelo usu�rio 
em uma outra moeda. O usu�rio dever� escolher entre tr�s moedas de destino: D�lar, 
Euro ou Peso, e o programa exibir� o valor convertido.
*/

#include<stdio.h>

int main(){
	
	int opcao;
	float convercao, valor;
	
	printf("Digite o valor: ");
	scanf("%f", &valor);
	
	do{
		printf("Boa noite!\n");
		printf("Escolha a opcao para conversao: \n\n");
		printf("1 - de REAIS para DOLAR.\n");
		printf("2 - de REAIS para EURO.\n");
		printf("3 - de REAIS para PESO CHILENO.\n\n");
		scanf("%d", &opcao);
		
		switch(opcao){
		
		case 1:
			convercao = valor*0.18;
			printf("O valor de REAIS para DOLAR e de: %.2f\n", convercao);
			break;
			
		case 2:
			convercao = valor*0.16;
			printf("O valor de REAIS para EURO e de: %.2f\n", convercao);
			break;
			
		case 3:
			convercao = valor*165.38;
			printf("O valor de REAIS para PESO CHILENO e de: %.2f\n", convercao);
			break;
			
		default:	
		printf("Operacao invalida!\n");
		break;
		
	}
	
	}while(opcao < 1 || opcao > 3);
	
	return 0;
	
}
