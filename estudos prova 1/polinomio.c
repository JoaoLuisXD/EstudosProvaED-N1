#include <stdio.h>
#include <stdlib.h>
int polinomio(int x); 
int main()
{
    int x,resultado;
    scanf("%d",&x);
    resultado=polinomio(x);
    printf("polinomio = %d",resultado);
    return 0;
}
int polinomio(int x)
{
    return 2*(x*x*x)+(x*x)+3;
}