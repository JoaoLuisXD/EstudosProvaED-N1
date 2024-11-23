#include <stdio.h>
#include <stdlib.h>
void maior (int n1,int n2,int n3);
int main()
{
    int n1,n2,n3;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    maior(n1,n2,n3);
    return 0;
}
void maior (int n1,int n2,int n3)
{
    if(n1>n2 && n1>n3)
    {
        printf("maior: %d",n1);
    }
    if(n2>n1 && n2>n3)
    {
        printf("maior: %d",n2);
    }
    if(n3>n1 && n3>n2)
    {
        printf("maior: %d",n3);
    }
}