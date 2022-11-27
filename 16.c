#include <stdio.h>

void main()
{
    int x, y;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    if ((x > 0) && (y < 0)) {
        printf("4 Quadrant!")
    } else if ((x > 0) && (y > 0)) {
        printf("1 Quadrant!")
    } else if ((x < 0) && (y > 0)) {
        printf("2 Quadrant!")
    } else if ((x < 0) && (y < 0)) {
        printf("3 Quadrant!")
    }
}
