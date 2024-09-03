#include<stdio.h>
void main()
{
	int n,f=1,i;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
{
    f=f*i;
    
}
	printf("%d",f);
}