#include <stdio.h>

void main()
{
    int days;
    float amount = 0.0;

    const float slab1 = 0.5;
    const float slab2 = 1;
    const float slab3 = 5;

    printf("Enter days: ");
    scanf("%d", &days);

    if (days > 30) {
        printf("Subscription cancelled");
    } else {
        if ((days > 0) && (days <= 5)) {
            amount += slab1 * (float)days;
        } else if ((days >= 6) && (days <= 10)) {
            amount += slab2 * (float)days;
        } else if ((days >= 10) && (days <= 30)) {
            amount += slab3 * (float)days;
        }

        printf("Your amount: %.2f", amount);
    }
}
