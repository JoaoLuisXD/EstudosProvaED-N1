#include <stdio.h>
#include <stdlib.h>
int minimo(int a, int b,int *menor);
int maximo(int a, int b, int *maior);
int main()
{
    int a,b,maior,menor;
    scanf("%d",&a);
    scanf("%d",&b);
    minimo(a,b,&menor);
    maximo(a,b,&maior);
    printf("MENOR %d\n", menor);
    printf("MAIOR %d\n", maior);
    return 0;
}
int minimo(int a, int b,int *menor)
{
    *menor=a<b?a:b;
    return *menor;
}
int maximo(int a, int b,int *maior)
{
    *maior=a>b?a:b;
    return *maior;
}