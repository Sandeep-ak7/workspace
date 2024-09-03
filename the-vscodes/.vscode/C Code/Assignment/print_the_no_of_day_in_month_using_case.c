#include<stdio.h>
void main ()
{
    int n;
    printf("ENTER THE MONTH NUMBER =");
    scanf("%d",&n);
    switch(n)
    {
        
case 1:
printf("NUMBER OF DAYS IN JANAURY = 31");
break;
case 2:
printf("NUMBER OF DAYS IN FEBRAURY = 28 OR 29");
break;
case 3:
printf("NUMBER OF DAYS IN MARCH = 31");
break;
case 4:
printf("NUMBER OF DAYS IN APRIL= 30");
break;
case 5:
printf("NUMBER OF DAYS IN MAY= 31");
break;
case 6:
printf("NUMBER OF DAYS IN JUNE = 30");
break;
case 7:
printf("NUMBER OF DAYS IN JULY = 31");
break;
case 8:
printf("NUMBER OF DAYS IN AUGUST = 31");
break;
case 9:
printf("NUMBER OF DAYS IN SEPTEMBER = 30");
break;
case 10:
printf("NUMBER OF DAYS IN OCTUBER = 31");
break;
case 11:
printf("NUMBER OF DAYS IN NOVEMBER = 30");
break;
case 12:
printf("NUMBER OF DAYS IN DECMBER = 31");
break;
default :
printf("PLEASE ENTER THE VALID MONTH NUMBER 1 TO 12 ");
    }
}