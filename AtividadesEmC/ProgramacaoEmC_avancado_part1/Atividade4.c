/*
4 - Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o maior 
elemento da linha em que se encontra o menor elemento da matriz. Elabore um 
programa que carregue uma matriz 4 X 4 com números reais, calcule e mostre seu 
MINMAX e sua posição (linha e coluna).
*/

#include <stdio.h>

int main(){
    float matriz[4][4]={{12,12,87,14},{59,32,16,107},{8,321,15,7},{41,22,874,1}}, min = 10000000, max = 0;
    int linhaMAX = 0, colunaMAX = 0, linhaMIN = 0, colunaMIN = 0;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(matriz[i][j] < min){
                min=matriz[i][j];
                linhaMIN = i;
                colunaMIN = j;
            }

            if(matriz[i][j] == min){
                max=0;
                for(int h=0; h<4; h++){
                    if(matriz[i][h]>max){
                        max = matriz[i][h];
                        linhaMAX = i;
                        colunaMAX = h;
                    }
                }
            }
        }
    }

    printf("O minimo da matriz e: %.0f na linha %d; coluna %d\nO maximo da linha e: %.0f na linha %d; coluna %d\n", min, linhaMIN, colunaMIN, max, linhaMAX, colunaMAX);

    return 0;
}