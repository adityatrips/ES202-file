#include <stdio.h>

void main()
{
    int n1, n2;
    printf("Enter num1 and num2: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        printf("%d > %d", n1, n2);
    } else {
        printf("%d > %d", n2, n1);
    }
}
