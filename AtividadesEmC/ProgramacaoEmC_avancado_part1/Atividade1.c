/*1 - Preencha dois vetores de 5 posições cada, e faça a troca de valores entre os vetores, 
de modo que o primeiro vetor receba os valores do segundo vetor e o segundo vetor, 
receba os valores do primeiro vetor. Mostre os vetores antes e após a troca.
 */

 #include <stdio.h>

 int main(){
    int vetor1[5]={1, 2, 3, 4, 5}, vetor2[5]={6, 7, 8, 9,10}, valorReserva = 0;

    for(int i=0; i<5; i++){
        printf("%d ", vetor1[i]);
    }

    printf("\n");

    for(int i=0; i<5; i++){
        printf("%d ", vetor2[i]);
    }

    printf("\n\n");
    

    for(int i=0; i<5; i++){
        valorReserva = vetor1[i];
        vetor1[i] = vetor2[i];
        vetor2[i] = valorReserva;
    }

    for(int i=0; i<5; i++){
        printf("%d ", vetor1[i]);
    }

    printf("\n");

    for(int i=0; i<5; i++){
        printf("%d ", vetor2[i]);
    }

    return 0;
 }