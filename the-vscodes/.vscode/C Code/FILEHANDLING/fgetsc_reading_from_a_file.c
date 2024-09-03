#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    FILE *fp;
    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("File Could not open ");
        exit(0);
    }
    while ((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
}
