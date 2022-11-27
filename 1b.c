#include <stdio.h>

void main()
{
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("%d + %d + %d = %d", n1, n2, n3, (n1 + n2 + n3));
}
