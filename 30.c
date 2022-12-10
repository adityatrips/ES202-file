#include <math.h>
#include <stdio.h>

void main()
{
    float num, sum = 0;

    printf("Enter number: ");
    scanf("%f", &num);

    for (int i = 1; i <= num; i += 2) {
        if (i % 2 == 0) {
            sum -= pow(i, 3);
        } else {
            sum += pow(i, 3);
        }
    }

    printf("Sum: %.3f", sum);
}
