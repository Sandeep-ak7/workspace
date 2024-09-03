#include<stdio.h>
void main ()
{
    int arm,n,number,d1,d2,d3;
    printf("Enter the number :");
    scanf("%d",&n);
    number=n;
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    arm=n/10;
    arm=d1*d1*d1*d2*d2*d2*d3*d3*d3;
    (n==arm)?printf("Number is armstrong"):printf("Number is not an armstrong");
}