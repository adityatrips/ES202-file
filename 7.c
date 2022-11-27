#include <math.h>
#include <stdio.h>

void main()
{
    float ar, s, a, b, c;
    printf("Enter a ,b ,c\n: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2.0;
    ar = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area: %f", ar);
}
