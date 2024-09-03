#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int array1[n], array2[n], sumArray[n];
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sumArray[i] = array1[i] + array2[i];
    }
    printf("Sum of corresponding elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", sumArray[i]);
    }
}
