#include<stdio.h>
void main ()
{
    int input;
    float t,ct;
    printf("TEMPRACTURE CONVERSION : \n");
    printf("press 1 for celcius to farenahite\n");
    printf("press 2 for farenahite to celcius\n");
    printf("Enter your input (1 or 2):\n");
    scanf("%d",&input);
    switch(input)
    {
        case 1: 
        printf("Enter the temprature in celsius:");
        scanf("%f",&t);
        ct=(t*9/5)+32;            
        printf("%.2f Celcius  is equal to %.2f farenhite\n", t, ct);
        break;
         case 2:
            printf("Enter temperature in Fahrenheit:\n");
            scanf("%f", &t);
            ct = (t- 32) * 5/9;
            printf("%.2f Fahrenheit is equal to %.2f Celsius\n", t, ct);
            break;

        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
            break;
    }
}

    