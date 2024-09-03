#include<stdio.h>
#include<string.h>
void main ()
{
    int i,j,k,flag=1;
    char ch[50];
    printf("Enter any string:");
    fgets(ch,50,stdin);
    for(i=0;ch[i]!='\0';i++)
    {
    }
    j=i-1;
    for(k=0;ch[k]!='\0';k++)
    {
        if(ch[k]!=ch[j])
    {
    flag=0;
    break;
    }
    j--;
    }
    if(flag==1)
    {
        printf("String is palindrome");

    }
    else
    {
        printf("string is not a palindrome ");
    }
}
