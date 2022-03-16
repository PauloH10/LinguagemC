/*
Programa pede ao usuário que digite 
o seu nome. Ao fazer sera alocado
na variável
*/
#include <stdio.h>

int main(){

    char nome[30];

    printf("Digite o seu nome e tecle Enter:\n");
    /*O %s é usado para mais caracteristicas*/
    scanf("%s",nome);
    printf("%s\n",nome);

    return 0;
}