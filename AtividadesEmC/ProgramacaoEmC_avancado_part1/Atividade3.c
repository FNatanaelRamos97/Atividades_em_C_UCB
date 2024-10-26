/*
3 - Crie um programa que preencha uma matriz 3 X 4 com números inteiros e some cada 
uma das linhas, armazenando os resultados das somas em um vetor. A seguir, o 
programa deverá multiplicar cada elemento da matriz pela soma da linha 
correspondente e mostrar a matriz resultante.
*/
#include <stdio.h>

int main(){
    int matriz[3][4]={{1, 2, 3, 4}, {5 , 6, 7, 8}, {9, 10, 11, 12}}, vetor1[3], soma=0, i, j;

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            soma+=matriz[i][j];
        }

        vetor1[i]=soma;
        soma=0;

        for(j=0; j<3; j++){
            for(int h=0; h<4; h++){
                printf("%4d ", matriz[j][h]*vetor1[i]);
            }    
            printf("\n");
        }
        printf("\n");

    }

    for(i=0; i<3; i++){
        printf("%d ", vetor1[i]);
    }

    return 0;
}