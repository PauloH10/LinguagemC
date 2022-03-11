#include <stdio.h>

int main(){
    int distancia, tempo, resultado;

    printf("ENtre com a distância percorrida:");
    scanf("%d",&distancia);

    printf("ENtre com o tempo gasto:");
    scanf("%d",&tempo);

    resultado = distancia / tempo;

    printf("\nA velociadade média foi é %dKM/h\n",resultado);
    return 0;
}