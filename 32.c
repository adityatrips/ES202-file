#include <math.h>
#include <stdio.h>

int convert(long long n)
{
    int dec = 0, rem, ctr = 0;

    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, ctr);
        ++ctr;
    }

    return dec;
}

void main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("The binary equivalent of %d is %lld", num, convert(num));
}
