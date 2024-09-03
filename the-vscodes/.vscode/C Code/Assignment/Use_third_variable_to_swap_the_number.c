
#include<stdio.h>

void main()
{

    int a,b ,t;

    printf("\nEnter the value of a=");

    scanf("%d",&a);

    printf("\nEnter the value of b=");

    scanf("%d",&b);

    t=a;

    a=b;

    b=t;

  printf("\nValue of a=%d & b=%d AFTER SWAPPING",a,b);

}


