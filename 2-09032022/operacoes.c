#include <stdio.h> //realizando as quatro operações da matematica 
int main()
{
    int n1,n2,soma,subtrair,dividir,multiplicar;
    printf("Digite um numero e tecle ENTER");
    scanf("%d",&n1);
    printf("Digite outro número e tecle ENTER");
    scanf("%d",&n2);

    soma = n1 + n2;
    subtrair = n1 - n2;
    dividir = n1 / n2;
    multiplicar = n1 * n2;

    printf("O resultado da soma é %d", soma);
    printf("O resultado da subtração é %d", subtrair);
    printf("O resultado da divisão é %d", dividir);
    printf("O resultado da multiplicação é %d", multiplicar);
    return 0;
}    