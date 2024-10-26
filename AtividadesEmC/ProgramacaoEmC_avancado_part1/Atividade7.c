/*
7 – Crie um programa que receba como parâmetro a altura e o sexo de uma pessoa e 
retorne o seu peso ideal. Fórmulas para cálculo do peso: peso ideal de homem = (72.7 * 
altura) - 58; peso ideal da mulher = (62,1 * altura) - 44.7
*/

#include<stdio.h>

float calcularPesoIdeal(float a, char s){
    if(s == 'F'){
        return (62.1*a)-44.7;
    }else if(s == 'M'){
        return (72.7*a)-58;
    }else{
        return 0;
    }
}

int main(){
    float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura do aluno: ");
    scanf("%f", &altura);
    
    printf("Digite o sexo do aluno.(F para feminino e M para masculino): ");
    scanf("%s", &sexo);
    
    printf("O peso ideal do aluno e: %.3f\n ", pesoIdeal = calcularPesoIdeal(altura, sexo));

    return 0;
}