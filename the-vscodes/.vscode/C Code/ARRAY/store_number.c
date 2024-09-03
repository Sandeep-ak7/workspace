#include<stdio.h>
void main()
{
    int a[4],n,i;
    printf("Enter the size of your array:");
    scanf("%d",&n);
    printf("Enter the elements of your array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Result of your array");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\n",a[i]);
    }
}