#include <stdio.h>
#include <stdlib.h>
struct n
{
    int a;
    int b;
    int c;
};
struct n num;
int main()
{
    printf("%d",sizeof(num));
    return 0;
}