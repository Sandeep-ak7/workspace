#include<stdio.h>
void main()
{
    int r;
    const float pi=3.14;
    float area;
    printf("enter radius of circle");
    scanf("%d",&r);
    area=pi*r*r;
    printf("area=%f",area);
}