#include<stdio.h>
void main( )
{
float bs,gs,da,hra,netsalary;
printf("Enter the basic salary of the employee: ");
scanf("%f",&bs);
da=0.25*bs;
hra=0.15*bs;
gs=bs+da+hra;
netsalary=gs-(0.10*(bs+da+hra));
printf("The net salary of the employee is: %f",netsalary);
}

