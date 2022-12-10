#include <stdio.h>

void main()
{
    float num, sum = 0;

    printf("Enter number: ");
    scanf("%f", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            sum -= (1.0 / i);
        } else {
            sum += (1.0 / i);
        }
    }

    printf("Sum: %.3f", sum);
}
