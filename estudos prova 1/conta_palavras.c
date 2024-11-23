#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int conta(char *palavra,char c);
int main()
{
    char palavra[100],c;
    gets(palavra);
    fflush(stdin);
    scanf("%c",&c);
    int resultado=conta(palavra,c);
    printf("%d",resultado);
    return 0;
}
int conta(char *palavra,char c)
{
    int cont=0;
    int tam=strlen(palavra);
    for(int i=0;i<tam;i++)
    {
        if(palavra[i]==c)
        {
            cont++;
        }
    }
    return cont;
}