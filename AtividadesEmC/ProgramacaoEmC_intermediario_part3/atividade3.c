/*
Atividade 3
*/
#include<stdio.h>

int main(){
	int ano = 2018, anoAtual, i;
	float salario = 1000, percentual;
	
	printf("Informe o ano atual: ");
	scanf("%d", &anoAtual);
	
	for(i = ano; i <= anoAtual; i++){
		
		if(i<2020){
		percentual+=0.015;
		salario=salario+(salario*percentual);
		
		printf("Percentual acumulado de aumento foi igual a %.1f\n", percentual*100);
		printf("Salario de %d foi igual a %.2f\n", i, salario);
	}
	else{
		percentual*=2;
		salario=salario+(salario*percentual);
		
		printf("Percentual acumulado de aumento foi igual a %.1f\n", percentual*100);
		printf("Salario de %d foi igual a %.2f\n", i, salario);
	} 
	
	}
	
	return 0;
}
