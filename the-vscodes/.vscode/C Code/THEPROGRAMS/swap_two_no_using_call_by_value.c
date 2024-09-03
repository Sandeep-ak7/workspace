#include<stdio.h>
void swapv(int x, int y);
void main()
{
    int a=15,b=11;
    printf("value of a=%d & b=%d before swapping",a,b);
    swapv(a,b);
    printf("\nvalue of a=%d & b=%d after swapping",a,b);
}
void swapv(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("\nvalue of a=%d & b=%d after swapping",x,y);
}
