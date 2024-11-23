#include <stdio.h>
#include <stdlib.h>
void swap_crescente(int *num1, int *num2);
int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("antes da troca n1 = %d | n2 = %d\n", num1,num2);
    swap_crescente(&num1,&num2);
    printf("depois da troca n1 = %d | n2 = %d",num1,num2);
    
    return 0;
}
void swap_crescente(int *num1, int *num2)
{
    int aux;
    if(*num1>*num2)
    {
        aux = *num2;
        *num2 = *num1;
        *num1 = aux;
    }
}