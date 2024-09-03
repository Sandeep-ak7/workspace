#include <stdio.h>
void main()
 {
    int a[10][10], b[10][10], d[10][10], i, j, k, r, c;
     // Input the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);
     // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
     // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }
     // Matrix multiplication
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            d[i][j] = 0;
            for (k = 0; k < c; k++) {
                d[i][j] = d[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
     // Display the result matrix
    printf("Result of multiplication of two matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }
}
