#include <stdio.h>

void main()
{
    int s;

    printf("Enter days: ");
    scanf("%d", &s);

    printf("Years  : %d", (s / 365));
    printf("\nWeeks  : %d", ((s / 365) / 52));
    printf("\nDays  : %d", s);
}
