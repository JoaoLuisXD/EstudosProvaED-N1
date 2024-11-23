#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double pi(int n);
int main()
{
    double resultado;
    resultado=4*pi(1000);
    printf("%lf",resultado);
    return 0;
}
double pi(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (pow(-1,n)/(2*n+1)) + pi(n-1);
    }

}