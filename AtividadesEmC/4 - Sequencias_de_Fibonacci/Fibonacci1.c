#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (){
	int n=1, i = 0;
	float raiz, exp1, exp2;
	double elevado1, elevado2, fn;
	
	while(i >= 0){
		setlocale(LC_ALL, "Portuguese");
	
		printf("Escolha um número para definir o limite da sequência de Fibonacci: ");
		scanf("%d", &i);
		
		if(i >= 0){
			while(n <= i){
				raiz = sqrt(5);
				exp1 = (1 + raiz) / 2;
				exp2 = (1 - raiz) / 2;
				elevado1 = pow(exp1, n);
				elevado2 = pow(exp2, n);
				
				fn = (elevado1 - elevado2) / raiz;
				
				printf("\nO %d valor vale, respectivamente, %.0f\n\n", n, fn);
				
				n++;
			}
			
		}else{
			
			printf("\nVoce digitou um número negativo. A operação será encerrada!\n");
			
		}
		
		n=1;
	
	}
	
	system("pause");
	return 0;
}
