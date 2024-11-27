#include <stdio.h>
#include <string.h>

typedef struct Filme{
	char nome[50];
	char categoria[50];
}Filme;

void exibirFilme(Filme filme[]){
	int i = 0;
	printf("Filmes em cartaz\n\n");
	for(i=0; i<3; i++){
		printf("%d - Nome filme: %s\n",i+1, filme[i].nome);
	}
}

void exibirCadeiras(){
	int i = 0, j = 0;
	
	printf("\nSelecione o lugar\n\n");
	
	for(i=0; i<10; i++){
		switch(i){
			case 0:
				printf("Fileira A - ");
				break;
			case 1:
				printf("Fileira B - ");
				break;
			case 2:
				printf("Fileira B - ");
				break;
			case 3:
				printf("Fileira C - ");
				break;
			case 4:
				printf("Fileira D - ");
				break;
			case 5:
				printf("Fileira E - ");
				break;
			case 6:
				printf("Fileira F - ");
				break;
			case 7:
				printf("Fileira G - ");
				break;
			case 8:
				printf("Fileira H - ");
				break;
			case 9:
				printf("Fileira I - ");
				break;
		}
		for(j=0; j<10; j++){
			printf("%d ",j+1);
		}
		printf("\n");
	}
}

int main(){
	Filme filme[3];
	
	strcpy(filme[0].nome, "A volta dos que não foram");
	strcpy(filme[0].categoria, "Ação");
	
	strcpy(filme[1].nome, "As tranças do rei careca");
	strcpy(filme[1].categoria, "Aventura");
	
	strcpy(filme[2].nome, "Quem foi que disse?");
	strcpy(filme[2].categoria, "Comédia");
	
	exibirFilme(filme);
	exibirCadeiras();
	
	return 0;
}
