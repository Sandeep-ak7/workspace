#include<stdio.h>
void main()
{
    int s1,s2,s3,s4,s5,sum;
    float average ;
    printf("\nEnter the marks of s1=" );
    scanf ("%d",&s1);
    printf("\nEnter the marks of s2=" );
    scanf("%d",&s2);
    printf("\nEnter the marks of s3=" );
    scanf("%d",&s3);
    printf("\nEnter the marks of s4=" );
    scanf("%d",&s4);
    printf("\nEnter the marks of s5=" );
    scanf("%d",&s5);
    sum=s1+s2+s3+s4+s5;
    average = (float)sum/5.0;
    printf ("\n sum of five subject %d",sum);
    printf("\n average of five subject %f", average);
}