#include<stdio.h>
void main()
{
    int n,a[10],i=0,j;
    printf("Enter any decimal number ");
    scanf("%d",&n);
    while(n!=0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
        for(j=i-1;j>=0;j--)
    {
        printf("Reverse element are%d:%d\n",a[j]);

    }
}