#include <stdbool.h>
#include <stdio.h>

int checkPerfectNumber(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is perfect", num);
    } else {
        printf("%d isn't perfect", num);
    }
}

void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    checkPerfectNumber(num);
}
