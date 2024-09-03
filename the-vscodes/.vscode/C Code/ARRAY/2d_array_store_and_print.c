#include<stdio.h>
void main()
{
    int a[4][4],row,col,j,i;
    printf("Enter the size of your array:");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of row:");
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("Enter the elements of row:");
    for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
     {
    printf("%d",a[i][j]);
     }
     printf("\n");
    }
}