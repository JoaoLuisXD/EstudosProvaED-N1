#include <stdio.h>
#include <stdlib.h>
int modulo (int n);
int main()
{
    int n,resultado;
    scanf("%d",&n);
    resultado = modulo(n);
    printf("modulo = %d",resultado);
    return 0;
}
int modulo (int n)
{
    if(n<0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

