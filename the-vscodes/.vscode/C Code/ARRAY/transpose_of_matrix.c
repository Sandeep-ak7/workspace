#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,r,col;
    printf("Enter the size number of row and column :");
    scanf("%d%d",&r,&col);
    printf("Enter the element of matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Result of transpose matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<col;i++)
    {
        for(j=0;j<r;j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
    }
}