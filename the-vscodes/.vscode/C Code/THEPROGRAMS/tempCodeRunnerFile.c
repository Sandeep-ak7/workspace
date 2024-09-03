#include<stdio.h>
void main()
{
int i, j, c, t;
printf("Prime numbers between 100 to 300\n");
for(i=101;i<300;i++)
{
t=i;
c=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
c=c+1;
}
}
if(c==2)
printf("%d\n",t);
}
}
