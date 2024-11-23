#include <stdio.h>

int fat(int num);
double calcular(int num);
int main()
{
    int num;
    scanf("%d", &num);
    int resultado = fat(num);
    printf("%d\n",resultado);
    double conta=calcular(num);
    printf("%lf",conta);
    return 0;
}
int fat(int num)
{
   if(num==0 || num==1)
    {
        return 1;
    }
   else
    {
        return num *fat(num-1);
    }
}
double calcular(int num)
{
    double soma=0.0;
    for(int i=1;i<=num;i++)
    {
        soma += (double)fat(i)/i;
    }
    return soma;
}