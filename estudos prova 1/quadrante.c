#include <stdio.h>
#include <stdlib.h>
int funcao(int x,int y);
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int resultado = funcao(x,y);
    printf("%d",resultado);
    return 0;
}
int funcao(int x,int y)
{
    if(x==0 && y==0)
    {
        return 0;
    }
    if(x>0 && y>0)
    {
        return 1;
    }
    if(x<0 && y>0)
    {
        return 2;
    }
    if(x<0 && y<0)
    {
        return 3;
    }
    if(x>0 && y<0)
    {
        return 4;
    }
    else return -1;
} 
