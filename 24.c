#include <math.h>
#include <stdio.h>

void main()
{
    int n, digit, sum = 0, temp;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }

    if (temp == sum) {
        printf("%d is armstrong.", temp);
    } else {
        printf("%d isn't armstrong.", temp);
    }
}
