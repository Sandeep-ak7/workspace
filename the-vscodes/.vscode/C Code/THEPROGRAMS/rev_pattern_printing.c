#include <stdio.h>
void main ()
{
    int i,j,n;
printf("Enter the value of number ");
scanf("%d",&n);
          // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Loop for each column in the current row
        for (int j = 1; j <= i; j++) {
            // Print the current count value and decrement it
            printf("%d ", n--);
        }
        // Move to the next line after printing each row
        printf("\n");
    }
}