

#include<stdio.h>
int fact();
void main ()
{
int x;
x=fact();
printf("%d",x);
}
int fact()
{
int i,n,f=1;
printf("Enter any number :");
scanf("%d",&n);
for(i=n;i!=0;i--)
{
 f=f*i;
}
return f;
}