#include <stdio.h>

void main()
{
    int s;

    printf("Enter seconds: ");
    scanf("%d", &s);

    printf("Hours  : %d", (s / 60) / 60);
    printf("\nMinutes: %d", (s / 60) - (((s / 60) / 60) * 60));
    printf("\nSeconds: %d", (((s / 60) - (((s / 60) / 60) * 60)) * 60));
}
