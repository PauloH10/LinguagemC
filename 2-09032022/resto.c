#include <stdio.h>
int main()
{
    int n1,n2, rs;

    printf("Digitar um número \n");
    scanf("%d",&n1);
    printf("Digite outro número\n");
    scanf("%d",&n2);
    rs = n1 % n2;
    printf("O resultado é %d",rs);
    return 0;
}