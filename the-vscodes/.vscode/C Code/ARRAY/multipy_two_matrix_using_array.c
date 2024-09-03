#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],d[5][5],r,c,i,j,k;
    printf("Enter the size of your array:");
    scanf("%d%d",&r,&c);
    printf("Enter first row:");
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("Enter first coloum:");
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
    scanf("%d",&b[i][j]);
     }
    }
     for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
        d[i][j]=0;
        for(k=0;k<r;k++)
        {
            d[i][j]=d[i][j]+(a[i][k]*b[k][j]);
        }
     }
     }
    printf("Result of multiply matrix");
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
    printf("%d",d[i][j]);
     }
     printf("\n");
    }
}
