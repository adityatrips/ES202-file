#include <math.h>
#include <stdio.h>

void main()
{
    float det;
    float a, b, c;
    float root1, root2;

    printf("Enter a b c: ");
    scanf("%f %f %f", &a, &b, &c);

    det = (b * b) - (4 * a * c);

    if (det > 0) {
        root1 = (-b + sqrt(det)) / (2 * a);
        root2 = (-b - sqrt(det)) / (2 * a);
        printf("Root 1:\n");
        printf("%.2f", root1);
        printf("\nRoot 2:\n");
        printf("%.2f", root2);
    } else if (det == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots:\n");
        printf("%.2f", root1);
    } else if (det < 0) {
        printf("Imaginary Roots!");
    }
}
