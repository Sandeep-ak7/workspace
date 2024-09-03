#include<stdio.h>
void main()
{
    int a[10],i,n,flag=0,key;
    printf("Enter the size of your array:");
    scanf("%d",&n);
    printf("enter the elemrnt of your aray:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter you element you want to search:");
    scanf("%d",&key);
      for(i=0;i<n;i++)
      {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
      }
      if(flag==1)
      {
        printf("\nElement foun at index=%d",i);
      }
      else
      {
        printf("Element not found");
      }
}