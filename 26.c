#include <stdio.h>

void main()
{
    int sum = 0, num;

    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i += 2) {
        sum += i;
    }

    printf("Sum: %d", sum);
}
