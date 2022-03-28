/*
Programa para trabalhar com funções. Vamos usar finções com
retorno, sem retorno, com argumento(parâmetros), sem argumentos
*/
#include <stdio.h>
#include <stdlib.h>

void separadorHT(){
    printf("\n");
    for(int i = 0 ; i <= 50 ; i++){
        printf("#");
    }
    printf("\n");
}
void separadorLinha(){
    printf("\n");
    for(int i = 0 ; i <= 50 ; i++){
        printf("_");
    }
    printf("\n");
}

void pularLinha(int qtdVezes){
    for(int i = 1 ; i <= qtdVezes; i++){
        printf("\n");
    }
}

void comparar(int v1, int v2){
    if(v1 > v2){
        printf("O primeiro número e maior que o segundo");
    }
    else if(v1 = v2){
        printf("O primeiro numero é igual o segundo numero");
    }
    else{
        printf("O segundo número e maior que o primeiro");
    }
    
}

void main(){
    int n1,n2;
    system("clear");//Limpar a tela terminal 
    //Chamando a função separador HT
    separadorHT();
    pularLinha(5);
    printf("\n\tPrograma que exibe uma mensagem\n");
    pularLinha(10);

    //Chamando a função separadorLinha
    separadorLinha();
    pularLinha(2);
    printf("Digite um número:\n");
    printf("Digite outro número:\n");
    scanf("%d",&n1);
    printf("Digite outro número:\n");
    scanf("%d",&n2);

    pularLinha(1);

    comparar(n1,n2);

    pularLinha(1);

}