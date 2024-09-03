#include<stdio.h>
void main()
{
    int a[50],n,min,max,i;
    float avg;
    printf("Enter the size of your array:");
    scanf("%d",&n);
    printf("Enter the elements of your array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    } 
    max=a[0];
    min=a[0];
    for(i=0;i<=n-1;i++)
    {
    if(max<a[i])
    {
        max=a[i];
    }
    if(min>a[i])
    {
        min=a[i];
    }
    }
        printf("minimum=%d\nmaximum=%d",min,max);
    }