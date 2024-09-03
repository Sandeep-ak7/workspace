#include<stdio.h>
void main()
{
    int a,b;
    printf("\nEnter the value of a=");
    scanf("%d",&a);
    printf("\nEnter the value of b=");
    scanf("%d",&b);
    printf("\nValue of a=%d & b=%d BEFORE SWAPPING",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
  printf("\nValue of a=%d & b=%d AFTER SWAPPING",a,b);
}


