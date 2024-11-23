#include <stdio.h>
#include <stdlib.h>
int funcao(int x,int y,int x1,int y1,int x0,int y0);
int main()
{
    int x,y,x1,y1,x0,y0;
    scanf("%d",&x0);
    scanf("%d",&x);
    scanf("%d",&x1);
    scanf("%d",&y0);
    scanf("%d",&y);
    scanf("%d",&y1);
    int resultado = funcao(x,y,x1,y1,x0,y0);
    printf("%d",resultado);
    return 0;
}
int funcao(int x,int y,int x1,int y1,int x0,int y0)
{
    if(x > x0 && x < x1 && y > y0 && y < y1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}