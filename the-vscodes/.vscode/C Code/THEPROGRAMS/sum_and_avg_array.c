#include<stdio.h>
void main()
{
    int a[10],n,i,s;
    float avg;
    printf("Enter the size of an array :");
    scanf("%d",&n);
    printf("Enter the element of an array:");
    for(i=0;i<=n-1;i++)
    {
    scanf("%d",&a[i]);
    s=s+a[i];
    }
    avg=s/(float)n;
    {
        printf("sum=%d,avg=%f",s,avg);
    }
}