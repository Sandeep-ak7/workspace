#include <stdio.h>
void main ()
{
    int n,no,p=0,c=0,d,pow;
    printf("Enter any number ");
    scanf("%d",&n);
    no=n;
    while(no>n)
    {
        no=no/10;
        c++;
    }
    no=n;
    while(no>n)
    {
        d=no%10;
        p=p+pow(d,c);
        no=no/10;
    }
    if(n==p)
    {
        printf("Number is Armstong");
    }
    else#include<stdio.h>
void main()
{
   int n,t;
   printf ("enter any number ");
   scanf("%d",&n);
   t=(n%2==0);
   switch (t)
   {
    case 0:
    printf("ODD NUMBER");
    break;
    case 1:
    printf("EVEN NUMBER");
   }
}
    {
        printf("Number is NOT armstong");
    }
}