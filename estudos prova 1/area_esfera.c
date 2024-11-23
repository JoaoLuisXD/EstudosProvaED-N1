#include <stdio.h>
#include <stdlib.h>
void calc_esfera(float r, float* area, float* volume); 
int main()
{
    float r,area,volume;
    scanf("%f",&r);
    calc_esfera(r,&area,&volume);
    return 0;
}
void calc_esfera(float r, float* area, float* volume)
{
    *area=4*(r*r);
    *volume=4*(r*r*r) / 3;
    printf("area = %f\n",*area);
    printf("volume = %f",*volume);
}