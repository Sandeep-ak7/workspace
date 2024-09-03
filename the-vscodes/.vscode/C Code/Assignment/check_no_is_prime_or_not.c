#include <stdio.h>
void main ()
{
int n,x=1,i;
printf("Enter any number: ");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
x=0;
break;
}
}
if(x==1)
{
printf("Number is PRIME");
}
else
{
printf("Number is NOT PRIME");
}
}