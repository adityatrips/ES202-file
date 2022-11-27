#include <stdio.h>

void main()
{
    int num, rev = 0, rem, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;

    while (num != 0) {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }

    if (n == rev) {
        printf("\nIs palindrome!");
    } else {
        printf("Isn't palindrome!");
    }
}
