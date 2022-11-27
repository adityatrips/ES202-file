#include <stdio.h>

void main()
{
    int year;

    printf("Enter your year: ");
    scanf("%d", &year);

    if ((year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0)) {
        printf("Yes, it is a leap year\n");
    } else {
        printf("No it is not a leap year\n");
    }
}
