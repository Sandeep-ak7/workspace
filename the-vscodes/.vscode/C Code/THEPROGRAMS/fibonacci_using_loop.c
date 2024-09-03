#include<stdio.h>
void main ()
{
    int n,c,a=0,b=1,i;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d \n %d",a,b);
    for(i=3;i<=n;i++)
    {
    c=a+b;
    printf("\n%d",c);
    a=b;
    b=c;
    }
}