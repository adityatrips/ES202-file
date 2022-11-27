#include <stdio.h>

void main()
{
    int upLim;
    int a = 0;
    int b = 1;
    int tmp;

    printf("Enter upper limit: ");
    scanf("%d", &upLim);

    while (a < upLim) {
        printf("%d ", a);
        tmp = a;
        a = b;
        b = tmp + a;
    }
    printf("\n");
}
