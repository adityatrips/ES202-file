#include <stdio.h>

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd")
    }
}
