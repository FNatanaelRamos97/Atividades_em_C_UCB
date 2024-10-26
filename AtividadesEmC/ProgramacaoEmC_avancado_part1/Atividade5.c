/*
5 - Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e uma 
letra. Se a letra for A o procedimento calcula a média aritmética das notas do aluno, se 
for P, a sua média ponderada (pesos: 5, 3 e 2)
*/

#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, char calcula){
    const int p1 = 5, p2 = 3, p3 = 2;

    if(calcula == 'A'){
        return (nota1+nota2+nota3)/3;
    }else if(calcula == 'P'){
        return ((nota1*p1)+(nota2*p2)+(nota3*p3))/(p1+p2+p3);
    }else{
        return 0; 
    }
}

int main(){
    float nota1, nota2, nota3, media;
    char calcula;

    printf("Digite o valor da primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite o valor da segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite o valor da terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite A para calcular a media aritmetica.\nDigite P para calcular a media ponderada.\n");
    scanf("%s", &calcula);

    media = calcularMedia(nota1, nota2, nota3, calcula);

    printf("A media e: %.1f \n", media);

    return 0;
}