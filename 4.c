#include <stdio.h>

void main()
{
    float w1, w2;

    printf("Enter weights: ");
    scanf("%f %f", &w1, &w2);

    printf("Average: %f", ((w1 + w2) / 2.0));
}
