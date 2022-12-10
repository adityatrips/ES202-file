#include <math.h>
#include <stdio.h>

int factorial(int num)
{
    int sum = 1;
    for (int i = 1; i <= num; i++) {
        sum *= i;
    }
    return sum;
}

void main()
{
    float num, sum = 0;

    printf("Enter number: ");
    scanf("%f", &num);

    for (int i = 1; i <= num; i++) {
        sum += ((float)i / factorial(i));
    }

    printf("Sum: %.3f", sum);
}
