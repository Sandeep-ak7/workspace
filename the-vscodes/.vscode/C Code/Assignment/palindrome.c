#include <stdio.h>
void main ()
{
    int n,a,rev=0,d,t;
    printf("Enter any number: ");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        d=t%10;
       rev=rev*10+d;
       t=t/10;
    }
    if(n==rev)
    {
        printf("Number is Palidrome");
    }
    else
    {
        printf("Number is NOT Palidrome");
    }
}