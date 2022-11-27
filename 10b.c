#include <stdio.h>

void main()
{
    int s;

    printf("Enter the largest angle: ");
    scanf("%d", &s);

    if (s > 90) {
        printf("Obtuse!");
    } else if (s < 90) {
        printf("Acute!");
    } else {
        printf("Right!")
    }
}
