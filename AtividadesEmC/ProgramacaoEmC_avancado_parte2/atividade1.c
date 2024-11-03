#include<stdio.h>
struct funcionarioTemp{
	char nome[50];
	float mes1, mes2, mes3, pontuacao, soma;
};

int main(){
	struct funcionarioTemp	funcionario[2];
	int i = 0;
	
	for(i=0; i<2; i++){
		printf("Digite o nome do %d funcionario: ", i+1);
		fgets(funcionario[i].nome, 50, stdin);
		
		printf("Digite o valor de Novembro de 2022: ");
		scanf("%f", &funcionario[i].mes1);
		
		printf("Digite o valor de Dezembro de 2022: ");
		scanf("%f", &funcionario[i].mes2);
		
		printf("Digite o valor de Janeiro de 2023: ");
		scanf("%f", &funcionario[i].mes3);
		
		funcionario[i].soma = funcionario[i].mes1+funcionario[i].mes2+funcionario[i].mes3;
		
		funcionario[i].pontuacao = funcionario[i].soma * 0.001;
		
		printf("\n");
		
		getchar();
		
	}
	
	if(funcionario[0].pontuacao > funcionario[1].pontuacao){
		printf("Nome: %s", funcionario[0].nome);
		printf("Pontuacao: %.2f\n", funcionario[0].pontuacao);		
	}else{
		printf("Nome: %s", funcionario[1].nome);
		printf("Pontuacao: %.2f\n", funcionario[1].pontuacao);
	}
	
	printf("\n\n");
	
	printf("Total vendido: %.2f\n", funcionario[0].soma+funcionario[1].soma);
	
	
	
	return 0;
}
