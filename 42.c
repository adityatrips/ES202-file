#include <stdio.h>

void main()
{
    for (int i = 3; i >= 1; i--) {
        for (int j = 3; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
