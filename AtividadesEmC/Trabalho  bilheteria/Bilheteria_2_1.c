#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define FILMES 2
#define FILAS 5
#define COLUNAS 5
#define INGRESSO 20.00

/*void limparTela(){
	#ifdef _WIN32
	sytem("cls");
	#else 
	sytem("clear");
	#endif
}*/

//Estrutura para armazenar detalhes do filme
typedef struct{
	char nome[50];
	char assentos[FILAS][COLUNAS];
}Filme;

//Estrutura para armazenar detalhes do bilhete
typedef struct {
	char nomeCliente[80];
	int filmeID, fila, coluna, bilheteID, combo /*0 = Não, 1 = Sim*/, meiaEntrada/*0 = Não, 1 = Sim*/;
} Bilhete;

void dadosCliente(Bilhete *bilhete){
	printf("\nComo o cliente deseja ser chamado: ");
	scanf("%s", bilhete->nomeCliente);
}

int MeiaEntrada(){
	int opcao;
	do{
		printf("\nCliente deseja meia entrada?\n");
		printf("1 - Sim; 2 - Não: ");
		scanf("%d", &opcao);
		if(opcao == 1){
			return 1;
		}else if(opcao == 2){
			return 0;
		}else{
			printf("\nOpção inválida\nDigite novamente\n");
		}
	}while(opcao<1 || opcao>2);
}

void exibirFilmes(Filme filme[]){
	printf("Filmes em cartaz\n\n");
	int i;
	for(i=0; i<FILMES; i++){
		printf("%d - %s\n", i+1, filme[i].nome);
	}
}

void exibirAssentos(Filme *filme){
	printf("\nAssentos (D para Disponivel e X para Oculpado):\n\n");
	printf("   ");
	
	int i, j;
	
	for(i=0; i<COLUNAS; i++){
		printf(" %d", i+1);
	}
		
	printf("\n");
	
	for(i=0; i<FILAS; i++){
		printf(" %d ", i+1);
		
		for(j=0; j<COLUNAS; j++){
			printf(" %c", filme->assentos[i][j]);
		}
		
		printf("\n");
	}
}

//reservarAssento
void compra(Filme *filme, Bilhete *bilhete){
	int fila, coluna;
	
	do{
		printf("\nEscolha o assento\n");
		
		printf("Digite o numero da fila: ");
		scanf("%d", &fila);
		fila = fila-1;
		
		printf("\nDigite o valor da coluna: ");
		scanf("%d", &coluna);
		coluna = coluna-1;
			
		printf("\n");
		
		if(fila>=0 && fila<FILAS && coluna>=0 && coluna<COLUNAS){
			if(filme->assentos[fila][coluna] == 'D'){
				filme->assentos[fila][coluna] = 'X';
				bilhete->fila = fila;
				bilhete->coluna = coluna;
				printf("Assento reservardo!\n");
				return;
			}else{
				printf("Assento ocupado. Selecione outra opção.\n");
			}
		}else{
			printf("Posição inválida.");
		}
	}while(1);
}

//sugerir combo
int combo(){
	int opcao;
	
	do{
		printf("\nAdicionar combo (pipoca + refrigerante)?\n");
		printf("1 - Sim; 2 - Não: ");
		scanf("%d", &opcao);
		if(opcao == 1){
			return 1;
		}else if(opcao == 2){
			return 0;
		}else{
			printf("\nOpção inválida\nDigite novamente\n");
		}
	}while(opcao<1 || opcao>2);
}

void gerarBilhete(Bilhete bilhete, Filme filme){
	printf("\n------------------------\n");
	printf("   BILHETE nº: %d", bilhete.bilheteID);
	printf("\n------------------------\n");
	printf("Nome cliente: %s\n", bilhete.nomeCliente);
	printf("Filme: %s\n", filme.nome);
	printf("Assento: fila %d, coluna %d\n", bilhete.fila + 1, bilhete.coluna + 1);
	
	if(bilhete.meiaEntrada){
		printf("Meia entrada: SIM\n");
		printf("Valor ingresso: R$%.2f\n", INGRESSO/2);
	}else{
		printf("Meia entrada: NÃO\n");
		printf("Valor ingresso: R$%.2f\n", INGRESSO);
	}
	
	if(bilhete.combo){
		printf("Combo incluido: Pipoca + Refrigerante\n");
	}else{
		printf("Combo não incluido\n");
	}
	printf("\n------------------------\n");
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	Filme filme[FILMES];
	
	strcpy(filme[0].nome, "A volta dos que não foram");
	strcpy(filme[1].nome, "As tranças do Rei Careca");
	
	/*char filmes[FILMES][50] = {
	"A volta dos que não foram",
	"As tranças do Rei Careca",
	"Quem foi que disse?"
	};*/
	
	/*char assentos[FILAS][COLUNAS];*/
	Bilhete bilhete[100];
	int BilheteID = 100;
	int op = 1, numeroCadastro=0;
	
	//Inicializar matriz de assentos com 'D' 
	int i, j, k;
	for(k=0; k<FILMES; k++){
		for(i=0; i<FILAS; i++){
			for(j=0; j<COLUNAS; j++){
				filme[k].assentos[i][j] = 'D';
			}
		}
	}
	

	do{
		exibirFilmes(filme);
		
		printf("\nEscolha o filme\n");
		printf("Digite o seu codigo (de 1 a %d): ", FILMES);
		scanf("%d", &bilhete[numeroCadastro].filmeID);
		
		bilhete[numeroCadastro].filmeID = bilhete[numeroCadastro].filmeID - 1;
	
		dadosCliente(&bilhete[numeroCadastro]);
		
		bilhete[numeroCadastro].meiaEntrada = MeiaEntrada();
	
		exibirAssentos(&filme[bilhete[numeroCadastro].filmeID]);
		
		compra(&filme[bilhete[numeroCadastro].filmeID], &bilhete[numeroCadastro]);		
		
		bilhete[numeroCadastro].combo = combo();
		
		bilhete[numeroCadastro].bilheteID = ++BilheteID;
		
		numeroCadastro++;
		
		system("cls");
		
		printf("\nDeseja realizar outra venda (1 - SIM; 2 - Não): ");
		scanf("%d", &op);
		
		system("cls");
	
	}while(op == 1);
	
	system("cls");
	
	for(i = 0; i < numeroCadastro; i++){
		gerarBilhete(bilhete[i], filme[bilhete[i].filmeID]);
	}
	
	return 0;
}

