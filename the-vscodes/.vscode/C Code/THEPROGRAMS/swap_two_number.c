#include<stdio.h>
void main()
{
    int a,b,s,n;
    printf("enter two digit number ");
    scanf("%d",&n);
{
    b = n % 10;
    a = n / 10;
}
    s=a;
    a=b;
    b=s;
    printf("a=%d b=%d",a,b);
}