#include <stdio.h>
#include <stdlib.h>
int converte (int *t);
int main()
{
    int t,resultado;
    scanf("%d", &t);
    resultado=converte(&t);
    printf("%d",resultado);
    return 0;
}
int converte (int *t)
{
    return *t*100;   
}