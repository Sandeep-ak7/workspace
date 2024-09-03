#include<stdio.h>
void main()
{
    int a[4],n,sum=0,i;
    float avg;
    printf("Enter the size of your array:");
    scanf("%d",&n);
    printf("Enter the elements of your array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/(float)n;
    {
        printf("\tresult:\n\tsum=%d\n\tavrage=%f",sum,avg);
    }
}