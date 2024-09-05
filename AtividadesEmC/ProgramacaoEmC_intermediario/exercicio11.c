/*
11 - Faça um programa que receba o código correspondente ao cargo de um funcionário 
e seu salário atual e mostre o cargo, o valor do aumento e seu novo salário. Os cargos 
estão na tabela a seguir.
*/

#include <stdio.h>

int main(){
    int codigo;
    float salario, aumento, novoSalario;

    printf("Informe o codigo do seu cargo: ");
    scanf("%d",&codigo);

    printf("Informe o seu salario atual: ");
    scanf("%f",&salario);

    if(codigo == 1){
        aumento = salario*0.5;
        novoSalario = salario+aumento;
        printf("O seu cargo e de ESCRITUARIO\n");
        printf("Seu aumento foi de: %.2f\n",aumento);
        printf("Seu novo salario e de: %.2f\n",novoSalario);
    }
    else if(codigo == 2){
        aumento = salario*0.35;
        novoSalario = salario+aumento;
        printf("O seu cargo e de SECRETARIO\n");
        printf("Seu aumento foi de: %.2f\n",aumento);
        printf("Seu novo salario e de: %.2f\n",novoSalario);
    }
    else if(codigo == 3){
        aumento = salario*0.2;
        novoSalario = salario+aumento;
        printf("O seu cargo e de CAIXA\n");
        printf("Seu aumento foi de: %.2f\n",aumento);
        printf("Seu novo salario e de: %.2f\n",novoSalario);
    }  
    else if(codigo == 4){
        aumento = salario*0.1;
        novoSalario = salario+aumento;
        printf("O seu cargo e de GERENTE\n");
        printf("Seu aumento foi de: %.2f\n",aumento);
        printf("Seu novo salario e de: %.2f\n",novoSalario);
    } 
    else if(codigo == 5){
        printf("O cargo de DIRETOR nao teve aumento\n");
    }
    else{
        printf("Codigo invalido\n");
    }

    return 0;
}