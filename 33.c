#include <math.h>
#include <stdio.h>

void main()
{
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            sum += pow(i, 4);
        }
    }

    printf("Sum: %d", sum);
}
