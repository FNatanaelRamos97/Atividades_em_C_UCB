/*
6 - Faça uma função que receba um único valor representando segundos. Essa função 
deverá convertê-lo para horas, minutos e segundos. Os segundos devem ser passados 
como parâmetro.
*/

#include <stdio.h>

void conversor(int segundos){
    int horas, minutos, segundos1;

    horas = segundos/3600;
    minutos = (segundos % 3600)/60;
    segundos1 = segundos % 60;

    printf("Horas: %d\nMinutos: %d\nSegundos: %d\n", horas, minutos, segundos1);
}

int main(){
    int segundos;

    printf("Digite o valor em segundos para converter em horas, minutos e segundos: ");
    scanf("%d", &segundos);

    conversor(segundos);

    return 0;
}