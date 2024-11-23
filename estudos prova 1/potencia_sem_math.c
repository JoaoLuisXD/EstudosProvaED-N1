#include <stdio.h>
#include <stdlib.h>
int potencia(int n,int np)
{
    if(np==0)
    {
        return 1;
    }
    else if(np==1)
    {
        return n;
    }
    return n*potencia(n,np-1);
}
int main()
{
    int n,np;
    scanf("%d",&n);
    scanf("%d",&np);
    int resultado = potencia(n,np);
    printf("%d",resultado);
    return 0;
}