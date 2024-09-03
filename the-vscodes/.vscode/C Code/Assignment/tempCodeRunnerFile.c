#include<stdio.h>
void main ()
{
    int a,b,c;
    printf("Enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("A is largest");
}
else if((b>a)&&(b>c));
{
    printf("B is largest ");
}
else
{
printf("C s largest");
}
}