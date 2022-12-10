#include <stdbool.h>
#include <stdio.h>

bool checkPrime(int num)
{
    if (num == 2) {
        return true;
    } else {
        for (int i = 1; i <= (int)(num / 2); i++) {
            if ((num % i == 0) && i != 1) {
                return false;
            }
        }
    }
    return true;
}

void main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (checkPrime(num)) {
        printf("Prime number");
    } else {
        printf("Composite number");
    }
}
