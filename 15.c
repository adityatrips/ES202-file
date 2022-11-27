#include <math.h>
#include <stdio.h>

void main()
{
    float det;
    int a, b, c;

    printf("Enter a b c: ");
    scanf("%d %d %d", &a, b, &c);

    det = pow(b, 2) - (4 * a * c);

    if (det > 0) {
        printf("Root 1:\n");
        printf("%.2f", (((-b) + sqrt(det)) / 2 * a));
        printf("Root 2:\n");
        printf("%.2f", (((-b) - sqrt(det)) / 2 * a));
    } else if (det == 0) {
        printf("Roots:\n");
        printf("%.2f", (-b / (2 * a)));
    } else {
        printf("Imaginary Roots!")
    }
}
