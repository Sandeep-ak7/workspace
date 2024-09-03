#include<stdio.h>

void main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)) {
        if (ch >= 97 && ch <= 122) {
            ch = ch - 32;
            printf("Uppercase: %c\n", ch);
        } else {
            printf("Enter any lowercase character\n");
        }
    } else {
        printf("Please enter any valid lowercase character\n");
    }
}
