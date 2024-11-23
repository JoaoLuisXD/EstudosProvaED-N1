#include <stdio.h>
#include <stdlib.h>
void primo (int n);
int main()
{
    int n;
    scanf("%d", &n);
    primo(n);
    return 0;
}
void primo (int n)
{
    if(n<=1)
    {
        printf("nao e primo");
    }
       for(int i=2;i<n;i++)
       {
            if(n%2==0)
            {
                printf("nao e primo");
                return;
            }              
       }
       printf("e primo");
       

}