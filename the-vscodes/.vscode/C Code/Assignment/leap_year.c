#include<stdio.h>
void main()
{
    int year;
    printf("ENTER THE YEAR : ");
    scanf("%d", &year);
    (year%4==0 &&(year%100!=0||year%400==0))?printf("%d is leap year",year):printf("%d is not a leap year",year);
}