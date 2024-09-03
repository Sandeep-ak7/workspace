#include<stdio.h>
void main()
{
    int a[5][5],r,c,i,j,csum,rsum;
    printf("Enter the size of your array:");
    scanf("%d%d",&r,&c);
    printf("Enter the element of your matrix:");
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<r;i++)
    {
        rsum=0;
        for(j=0;j<c;j++)
     {
    rsum=rsum+(a[i][j]);
     }
     printf("sum of row =%d\n",rsum);
    }
    for(j=0;j<c;j++)
     {
        csum=0;
     for(i=0;i<r;i++)
     {
        csum=csum+(a[i][j]);  
     }
     printf("\nsum of column=%d",csum);
     }
}