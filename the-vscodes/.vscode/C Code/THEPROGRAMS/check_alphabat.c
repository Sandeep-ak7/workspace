#include<stdio.h>

void main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);
    if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf ("Charecter ");
    }
    else
    {
        printf("Not a charecter");
    }
}
