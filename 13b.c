#include <stdio.h>

void main()
{
    int n1, n2, n3;
    printf("Enter num1 and num2 and num3: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if ((n1 > n2) && ((n1 > n3))) {
        printf("%d > %d and %d", n1, n2, n3);
    } else if ((n2 > n1) && ((n2 > n3))) {
        printf("%d > %d and %d", n2, n1, n3);
    } else {
        printf("%d > %d and %d", n3, n1, n2);
    }
}
