#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[50];
}Filme;

void exibirFilme(Filme filme[]){
	int i = 0;
	printf("Filmes em cartaz\n\n");
	for(i=0; i<3; i++){
		printf("%d - %s\n",i+1, filme[i].nome);
	}
}

void exibirCadeiras(){
	int i = 0, j = 0;
	
	printf("\nSelecione o lugar\n\n");
	
	for(i=0; i<10; i++){
		printf("Fileira %3d - ",i+1);
		for(j=0; j<10; j++){
			printf("%3d ",j+1);
		}
		printf("\n");
	}
}

int main(){
	Filme filme[3];
	
	strcpy(filme[0].nome, "A volta dos que não foram");
	strcpy(filme[1].nome, "As tranças do rei careca");
	strcpy(filme[2].nome, "Quem foi que disse?");
	
	exibirFilme(filme);
	exibirCadeiras();
	
	return 0;
}
