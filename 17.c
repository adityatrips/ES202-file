#include <stdio.h>

void main()
{
    int basic;

    printf("Enter basic pay: ");
    scanf("%d", &basic);

    printf("Total pay: %.2f", (basic + (0.4 * basic) + (0.2 * basic)));
}
