#include<stdio.h>
void main()
{
int a,b,c;
printf("enter any number :");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
    if(a>c)
    printf("A is largest");
}
else
{
    if(b>c)
printf("B is largest");

}
printf("C is largest");
}