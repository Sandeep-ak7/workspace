#include<stdio.h>
void main()
{
    int a[10],n,i,s,min,max;
    float avg;
    printf("Enter the size of an array :");
    scanf("%d",&n);
    printf("Enter the element of an array:");
    for(i=0;i<=n-1;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
      for(i=0;i<=n-1;i++) 
{
    if (max<a[i])
{
    max=a[i];
}
if(min>a[i])
{
    min=a[i];
}
}
printf("maximum=%d\n",max);
printf("minimum=%d",min);
}