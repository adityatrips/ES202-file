#include <stdio.h>

void main()
{
    int a = 1, b = 2, tmp;
    printf("Before swap\na=%d\nb=%d", a, b);
    tmp = a;
    a = b;
    b = tmp;
    printf("\nAfter swap\na=%d\nb=%d", a, b);
}
