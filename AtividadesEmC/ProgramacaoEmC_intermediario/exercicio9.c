/*
9 - A nota final de um estudante é calculada a partir de três notas atribuídas 
respectivamente a um trabalho de laboratório, a uma avaliação semestral e a um exame 
final. A média das três notas mencionadas anteriormente obedece aos pesos a seguir:

Faça um programa que receba as três notas, calcule e mostre a média ponderada e o 
conceito que segue a tabela abaixo
*/

#include <stdio.h>

#define tl  0.2 //constante de trabalho laboratorial
#define av  0.3 //constante de avaliacao semestral
#define ef  0.5 //constante de exame final

int main(){

    float nota1, nota2, nota3, media;

    printf("Digite a sua nota de TRABALHO DE LABORATORIO: ");
    scanf("%f",&nota1);

    printf("Digite a sua nota da AVALIACAO SEMESTRAL: ");
    scanf("%f",&nota2);

    printf("Digite a sua nota do EXAME FINAL: ");
    scanf("%f",&nota3);

    media = (nota1*tl)+(nota2*av)+(nota3*ef);

    printf("Sua media e: %.2f\n",media);
    if(media<5){
        printf("Seu conceito e o E");
    }
    else if(media<6){
        printf("Seu conceito e o D");
    }
    else if(media<7){
        printf("Seu conceito e o C");
    }
    else if(media<8){
        printf("Seu conceito e o B");
    }
    else{
        printf("Seu conceito e o A");
    }

    return 0;
}