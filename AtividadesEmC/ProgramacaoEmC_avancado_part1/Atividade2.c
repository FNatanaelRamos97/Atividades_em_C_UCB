/*2 - Faça um programa que preencha dois vetores de 3 elementos numéricos cada e 
depois ordene-os de maneira crescente. Deverá ser gerado um terceiro vetor com 6 
posições, composto pela junção dos elementos dos vetores anteriores, também 
ordenado de maneira crescente.*/

int main(){
    int vetor1[3]={5, 1, 3}, vetor2[3]={4, 6, 2}, vetor3[6], troca = 0, i;

    //O laço abaixo coloca os vetores em ordem
    for(i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(vetor1[i] < vetor1[j]){
                troca = vetor1[i];
                vetor1[i] = vetor1[j];
                vetor1[j] = troca;
            }
        }

        for(int j=0; j<3; j++){
            if(vetor2[i] < vetor2[j]){
                troca = vetor2[i];
                vetor2[i] = vetor2[j];
                vetor2[j] = troca;
            }
        }    
    }
    //O segundo laço atribui os vetores menores ao vetor maior
    for(i=0; i<3; i++){
        vetor3[i] = vetor1[i];
        vetor3[i+3] = vetor2[i];
    }
    //O terceiro laço ordena o vertor maior
    for(i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(vetor3[i] < vetor3[j]){
                troca = vetor3[i];
                vetor3[i] = vetor3[j];
                vetor3[j] = troca;
            }
        }
    }
    // E por ultimo o vetor de 6 posições é impresso
    for(i=0; i<6; i++){
        printf("%d ", vetor3[i]);
    }

    return 0;
}