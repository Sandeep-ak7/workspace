#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
int n,f=1,i;
printf("Enter any number: ");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
f=f*i;
}
printf("The sum of series 1!+2!+3!+--------------%d!=%d",n,f);
}