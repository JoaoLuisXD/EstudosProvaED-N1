#include <stdio.h>
#include <stdlib.h>
float media (float *n1,float soma);
int main()
{
    float n1[3],soma=0;
    for(int i=0;i<3;i++)
    {
        scanf("%f",&n1[i]);
    }
    float resultado = media(n1,soma);
    printf("media e %f",resultado);

    return 0;
}
float media (float *n1,float soma)
{
    float media=0;
    for(int i=0;i<3;i++)
    {
        soma+=n1[i];
    }
    media=soma/3;
    return media;
}