#include <stdio.h>
void main()
{
    int i,j,row;
    printf("Enter the row number:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}