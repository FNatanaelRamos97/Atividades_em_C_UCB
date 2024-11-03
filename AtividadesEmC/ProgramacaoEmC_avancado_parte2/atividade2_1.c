#include<stdio.h>
#include<string.h>

#define qtdCadastro 2

struct Produto{
	int codigo, qtdEstoque, estoqueMinimo;
	char descricao[50];
	float precoCompra, precoVenda;
};

void VerificarEstoque(struct Produto produto[]){
	int i=0;
	
	for(i=0; i<qtdCadastro; i++){
		if(produto[i].estoqueMinimo > produto[i].qtdEstoque){
			produto[i].descricao[strcspn(produto[i].descricao, "\n")] = '\0';
			printf("Produto %s se encontra com o estoque abaixo do permitido. \n",produto[i].descricao);
			printf("\n");
		}
	}
}

void calcularLucro(struct Produto produto){
	
	float lucro = produto.precoVenda - produto.precoCompra;
	float porcentagemLucro = (lucro/produto.precoCompra)*100;
	
	printf("Codigo: %d\n", produto.codigo);
	printf("O valor do lucro e: %.2f\n", lucro);
	printf("A porcentagem de lucro: %.0f%%\n", porcentagemLucro);
	printf("\n");
	
}

void CadastrarProduto(struct Produto produto[]){
	
	int i=0;
	
	for(i=0; i<qtdCadastro; i++){
		printf("Digite o codigo: ");
		scanf("%d", &produto[i].codigo);
		
		getchar();
		
		printf("Digite a descricao: ");
		fgets(produto[i].descricao, 50, stdin);
		
		printf("Digite o preco de compra: ");
		scanf("%f", &produto[i].precoCompra);
		
		printf("Digite o preco de venda: ");
		scanf("%f", &produto[i].precoVenda);
		
		printf("Digite a quantidade em estoque: ");
		scanf("%d", &produto[i].qtdEstoque);
		
		printf("Digite a quantidade de estoque minimo: ");
		scanf("%d", &produto[i].estoqueMinimo);
		
		printf("\n");
	}
	
}

int main(){
	int i=0;
	struct Produto produto[qtdCadastro];
	
	CadastrarProduto(produto);
	
	for(i=0; i<qtdCadastro; i++){
		
		calcularLucro(produto[i]);
	}
		
	VerificarEstoque(produto);
	
	return 0;
}
