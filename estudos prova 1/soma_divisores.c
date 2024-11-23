#include <stdio.h>
#include <stdlib.h>
int divi(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int resultado;
    resultado=divi(n);
    printf("%d",resultado);
    return 0;
}
int divi(int n)
{
    int soma=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            soma+=i;
        }
    }
    return soma;
}