#include <stdio.h>

int fat(int num);

int main()
{
    int num;
    scanf("%d", &num);
    int resultado = fat(num);
    printf("%d",resultado);

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