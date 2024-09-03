#include<stdio.h>
#include<math.h>
void main ()
{
    int a,b,c,d,r1,r2,root;
    printf("ENTER THE VALUE OF A,B,C : ");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    switch(d>0)
    {
case 1:
r1=(-b+squrt(d)/(2*a));
r2=(-b-squrt(d)/(2*a));
printf("%d%d",r1,r2);
root=squrt(d);
break;


case 0:
switch (d==0)
{
r1=(-b/(2*a));
r2=r1;
printf("print one real roots%d%d",r1,r2);
break;
case 0:
printf("roots are complex");
}
    }
}