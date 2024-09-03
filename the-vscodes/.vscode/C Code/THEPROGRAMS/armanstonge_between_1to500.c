#include<stdio.h>
#include<math.h>
void main()
{
int i, j, c,arm,d, t;
printf("Armstrong number between 1 to 500\n");
for(i=2;i<500;i++)
{
t=i;
c=0;
while(t!=0)
{
c=c+1;
t=t/10;
}
t=i;
arm=0;
while(t!=0)
{
d=t%10;
arm=arm+pow(d,c);
t=t/10;
}
if(i==arm)
printf("%d\n",i);
}
}