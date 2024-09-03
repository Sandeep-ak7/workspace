#include<stdio.h>
void main ()
{
    int n,c,a=0,b=1;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    c=a+b;
        while (c<=n)
   {
    printf("%d\n",c);
    a=b;
    b=c;
    c=a+b;
   }
}
