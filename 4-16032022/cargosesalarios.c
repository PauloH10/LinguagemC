/* Cargos e salarios que o programa que voce 
digita o cargo e ele te da o salário da pessoa */
#include <stdio.h>

int main(){
    /*Nomes dos cargos que o usuario tem que digitar
    para que mostre os salarios*/
    char cargo[15];
    
    printf("Digite o cargo e tecle Enter\n");
    scanf("%s",cargo);

    if(strcmp(cargo == "Diretor")==0{
        printf("O salário do diretor é R$15.000,00");
    }
    else if(strcmp(cargo == "Gerente"){==0{
        printf("O salário do gerente é R$12.000,00");
    }
    else if(strcmp(cargo == "Analista")==0{
        printf("O salário do analista é R$ 8.000,00");
    }
    else if(strcmp(cargo == "Assistente")==0{
        printf("O salário do assistente é R$4.000,00");
    }
    else if(strcmp(cargo == "Auxiliar")==0{
        printf("O salário do auxiliar é R$2.000,00");
    }
    else{
         printf("Não há salário");
    }
    return 0;
}

