#include<stdio.h>
void main ()
{
int a,b,result;
char op;
printf(" Enter an operator (+,-,*,/) :");
scanf("%c",&op);
printf("Enter the a= ");
scanf("%d",&a);
printf("Enter the b= ");
scanf("%d",&b);
switch(op)
{
case'+':
result=a+b;
break;
case'-':
result=a-b;
break;
case'*':
result=a*b;
break;
case'/':
result=a/b;
break;
default:
printf("Please enter the valid operation (+,-,*,/)");
}
printf("Result:%d %c %d = %d\n",a,op,b,result);
}

