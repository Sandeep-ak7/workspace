#include<stdio.h>

void main() {
    int m;
    printf("Enter the marks of student: ");
    scanf("%d", &m);

    if (m > 85 && m <= 100) {
        printf("A");
    } else if (m > 60 && m <= 85) {
        printf("B+");
    } else if (m > 40 && m <= 60) {
        printf("B");
    } else if (m > 30 && m <= 40) {
        printf("C");
    } else if (m >= 0 && m <= 30) {
        printf("FAIL");
    } 
}
