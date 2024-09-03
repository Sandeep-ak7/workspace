#include<stdio.h>
void main()
{
    int a[10],n,i;
    printf("Enter the size of an array :");
    scanf("%d",&n);
    printf("Enter the element of an array:");
    for(i=0;i<=n-1;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Result of your array :");
    for(i=0;i<=n-1;i++)
    {
        printf("\n%d",a[i]);
    }
}