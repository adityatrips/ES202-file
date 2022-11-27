#include <stdio.h>

void main()
{
    int dec;
    float ce, fa;

    printf("1. C to F");
    printf("\n2. F to C");

    printf("\nChoose:  ");
    scanf("%d", &dec);

    switch (dec) {
    case 1:
        printf("Enter C: ");
        scanf("%f", &ce);
        printf("%.2f in F is %.2f", ce, ((ce / 1.8) + 32));
        break;
    case 2:
        printf("Enter F: ");
        scanf("%f", &fa);
        printf("%.2f in C is %.2f", fa, ((fa - 32) * 0.55));
        break;
    }
}
