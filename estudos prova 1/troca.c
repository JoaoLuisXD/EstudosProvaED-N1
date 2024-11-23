#include <stdio.h>
#include <stdlib.h>
void troca (int *n1,int *n2);
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("antes da troca n1=%d e n2=%d\n",n1,n2);
    troca(&n1,&n2);
    printf("depois da troca n1=%d e n2=%d",n1,n2);
    return 0;
}
void troca (int *n1,int *n2)
{
    int aux=0;
    if(*n1<*n2)
    {
        aux = *n1;
        *n1 = *n2;
        *n2 = aux;
    }
}