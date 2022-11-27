#include <stdio.h>

void main()
{
    float PI = 3.14;
    float rad;

    printf("Enter radius: ");
    scanf("%f", &rad);

    printf("Area is %f", (PI * rad * rad));
}
