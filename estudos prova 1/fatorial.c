#include <stdio.h>
#include <stdlib.h>
int fat (int n);
int main()
{
    int n;
    scanf("%d",&n);
    int resultado=fat(n);
    printf("%d",resultado);
   
    return 0;
}
int fat (int n)
{
    int fat=1;
    for(int i=n;i>0;i--)
    {
        fat *= i;
    }
    return fat;
}