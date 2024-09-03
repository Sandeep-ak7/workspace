#include <stdio.h>

 void main()
 {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
   int marks[n];
    for (i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    int sum = 0;
    for (i = 0; i < n; i++) {
    sum += marks[i];
    }
    float average = (float)sum / n;
    printf("Sum of marks: %d\n", sum);
    printf("Average marks: %f\n", average);
}
