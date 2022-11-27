#include <stdio.h>

int factorial(int num)
{
    int f = 1;
    for (int i = 1; i < num; i++) {
        f += f * i;
    }
    return f;
}

void main()
{
    int num;
    printf("Enter number to find it's factorial: ");
    scanf("%d", &num);

    printf("%d is the factorial of %d", factorial(num), num);
}
