#include <stdio.h>

void main()
{
    int a = 10, b = 20;
    printf("Before swap \na=%d \nb=%d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swap \na=%d \nb=%d", a, b);
}
