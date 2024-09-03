#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,r,col;
    printf("Enter the size number of row and column :");
    scanf("%d%d",&r,&col);
    printf("Enter the element of first matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of second matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    }
    printf("Your result of added matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
    }
}