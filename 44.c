#include <stdio.h>

void main()
{
    int space, k = 0;
    for (int i = 1; i <= 4; i++, k = 0) {
        for (int space = 1; space <= 4 - i; space++) {
            printf("  ");
        }
        while (k != 2 * i - 1) {
            printf("* ");
            k++;
        }
        printf("\n");
    }
}
