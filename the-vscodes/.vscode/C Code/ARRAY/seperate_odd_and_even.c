#include <stdio.h>
void main()
{
    int a[10], odd[50], even[50], n, i, e = 0, o = 0;
    printf("Enter the size of your array: ");
    scanf("%d", &n);

    printf("Enter the elements of your array: ");
    for (i = 0; i < n; i++) 
    { 
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even[e] = a[i];
            e++;
        } else {
            odd[o] = a[i];
            o++;
        }
    }

    printf("List of EVEN numbers: ");
    for (i = 0; i < e; i++) 
    {
        printf("%d\t", even[i]);
    }

    printf("\nList of ODD numbers: ");
    for (i = 0; i < o; i++)
    { 
        printf("%d\t", odd[i]);
    }
}
