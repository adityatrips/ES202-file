#include <stdio.h>

void main()
{
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4 - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        for (int m = i - 1; m >= 1; m--) {
            printf("%d", m);
        }
        printf("\n");
    }
}
