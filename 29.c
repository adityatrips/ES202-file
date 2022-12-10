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
    int num, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        sum += factorial(i);
    }

    printf("Sum: %d", sum);
}
