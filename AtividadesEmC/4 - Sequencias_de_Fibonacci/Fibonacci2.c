//Sequecia_Fibonacci

#include<stdio.h>
#include<locale.h>

int main(){

    int sn = 0 , i = 3;
	double  x = 1, y = 1;
	 
	setlocale(LC_ALL, "Portuguese");
	
	printf("Os dois primeiros numeros da sequência é: n1 = 1 e n2 = 1.\n\n");
	
    while(sn >= 0){
    printf("\nDigite o n da sequência (n tem que ser maior ou igual a 3): ");
    scanf("%d", &sn);

    if(sn > 0){
    while(i <= sn){

        x = x+y;
        printf("O %d da sequência e: %.0f\n", i, x);
        i++;

        y = y+x;
        printf("O %d da sequência e: %.0f\n", i, y);
        i++;
    }  
    }
    else{
        printf("O numero digitado é negativo. O programa será encerrado\n");
    }
    
    i = 3;
    x = 1;
    y = 1;
    
    }
    
    return 0;
}
