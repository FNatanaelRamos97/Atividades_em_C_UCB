/*
6 - Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e 
cresce 3 centímetros por ano. Construa um programa que calcule e imprima quantos 
anos serão necessários para que Zé seja maior que Chico. 
*/

#include<stdio.h>

int main(){
	float chico = 1.50, ze = 1.10;
	int i;
	
	for(i = 1; i <= 1000; i++){
		chico+=0.2;
		ze+=0.3;
		
		if(ze > chico){
			printf("Ze sera maior que Chico apos %2d anos",i);
			break;
		}
		
	}
	
	
	return 0;
}
