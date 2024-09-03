#include <stdio.h>
void main()
{
    int i,j,row,s;
    printf("Enter the row number:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(s=1;s<=row-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

