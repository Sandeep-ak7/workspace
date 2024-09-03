#include<stdio.h>
void main()
{
    int m;
    printf("Enter the student marks out of hundred:");
    scanf("%d",&m);
    if (m>=30)
    {
        if(m>=40)
    {
        if(m>=60)
    {
        if((m>=85)&&(m<=100))
        {
            printf("A");
        }
        else
    {
            printf("B+");
    }
    }
    else
    {
            printf("B");
    }
    }
    else
    {
            printf("C");
    }
    }
    else
    {
            printf("FAIL");
    }
}