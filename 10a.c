#include <stdio.h>

void main()
{
    int s1, s2, s3;

    printf("Enter the three sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 == s2 && s2 == s3) {
        printf("Equilateral Triangle\n");
    } else if (s1 == s2 || s2 == s3 || s1 == s3) {
        printf("Isosceles Triangle\n");
    } else {
        printf("Scalene Triangle\n");
    }
}
