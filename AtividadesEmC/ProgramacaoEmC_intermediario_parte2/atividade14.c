/*
14 - Escreva um programa que simule um menu de restaurante com três pratos 
principais e um menu adicional para escolher acompanhamentos. Após o usuário 
escolher um prato principal, o programa deve exibir um submenu com três opções de 
acompanhamentos. O programa deve permitir ao usuário escolher um 
acompanhamento e retornar ao menu principal até que ele escolha a opção para sair.
*/

#include<stdio.h>

int main(){

    int opcao = 0;

    while (opcao != 4){
        printf("SEJA BEM-VINDO! Escolha nossas opcoes abaixo!\n");
        printf("1 - Arroz com tropeiro.\n");
        printf("2 - Arroz com feijao carioca\n");
        printf("3 - Arroz com strogonof\n");
        printf("4 - Sair do menu\n" );
        scanf("%d", &opcao);

        if(opcao > 0 && opcao < 4){
        switch (opcao){
        case 1:
            printf("Sua escolha foi Arroz com tropeiro:\n");
            printf("Os acompanhamentos para este prato sao: \n");
            printf("1 - Alcatra com vinagrete.\n");
            printf("2 - Linguica com molho de churrasco.\n");
            printf("3 - Iscas de frango acebolada. \n");
            scanf("%d", &opcao);

            switch (opcao){
            case 1:
                printf("Sua escolha foi Arroz com tropeiro + ");
                printf("Alcatra com vinagrete\n");
                printf("Aguarde enquanto esta sendo preparado\n");
                break;

            case 2:
                printf("Sua escolha foi Arroz com tropeiro + ");
                printf("Linguica com molho de churrasco\n");
                printf("Aguarde enquanto esta sendo preparado\n");
                break; 

            case 3:
                printf("Sua escolha foi Arroz com tropeiro + ");
                printf("Iscas de frango acebolada\n");
                printf("Aguarde enquanto esta sendo preparado\n");
                break;       
            
            default:
                printf("Opcao invalida!\n");
                break;
            }
            break;

        case 2:
            printf("Sua escolha foi Arroz com feijao carioca:\n");
            printf("Os acompanhamentos para este prato sao: \n");
            printf("1 - Alcatra com vinagrete.\n");
            printf("2 - Linguica com molho de churrasco.\n");
            printf("3 - Iscas de frango acebolada. \n");
            scanf("%d", &opcao);

            switch (opcao){
            case 1:
                printf("Sua escolha foi Arroz com feijao carioca + ");
                printf("Alcatra com vinagrete\n");
                printf("Aguarde enquanto esta sendo preparado\n");
                break;

            case 2:
                printf("Sua escolha foi Arroz com feijao carioca + ");
                printf("Linguica com molho de churrasco\n");
                printf("Aguarde enquanto esta sendo preparado\n");
                break; 

            case 3:
                printf("Sua escolha foi Arroz com feijao carioca + ");
                printf("Iscas de frango acebolada\n");
                printf("Aguarde enquanto esta sendo preparado\n");
                break;       
            
            default:
                printf("Opcao invalida!\n");
                break;
            }
            break;

            case 3:
            printf("Sua escolha foi Arroz com strogonof:\n");
            printf("Os acompanhamentos para este prato sao: \n");
            printf("1 - Batata frita.\n");
            printf("2 - Batata palha.\n");
            printf("3 - Pure de batata. \n");
            scanf("%d", &opcao);

            switch (opcao){
            case 1:
                printf("Sua escolha foi Arroz com strogonof + ");
                printf("Batata palha\n");
                printf("Aguarde enquanto esta sendo preparado\n");
                break;

            case 2:
                printf("Sua escolha foi Arroz com strogonof + ");
                printf("Batata palha\n");
                printf("Aguarde enquanto esta sendo preparado\n");
                break; 

            case 3:
                printf("Sua escolha foi Arroz com strogonof + ");
                printf("Pure de batata\n");
                printf("Aguarde enquanto esta sendo preparado\n");
                break;       
            
            default:
                printf("Opcao invalida!\n");
                break;
            }
            break;


        default:
            printf("Opcao invalida\n");
            break;
        }
        }
        else if(opcao == 4){
            printf("Ate a proxima!\n");
        }
        else{
            printf("Opcao invalida.\n\n");
        }

    }
    


    return 0;
}
