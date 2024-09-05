/*
10 - Faça um programa que receba três notas de um aluno, calcule e mostre a média 
aritmética e a mensagem que segue a tabela abaixo. Para alunos de exame, calcule e 
mostre a nota que deverá ser tirada no exame para aprovação, considerando que a 
média no exame é 6,00.
*/

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media, notaExame;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);

    media = (nota1+nota2+nota3)/3;

    if(media<3){
        printf("Voce esta REPROVADO");
    }
    else if(media<7){
        printf("Voce tera que fazer o EXAME\n");
        notaExame = (6-media);
        printf("Voce precisa de %.2f para ser aprovado no exame\n",notaExame);
    }
    else{
        printf("Voce esta APROVADO");
    }
    
    return 0;
}