#include <stdio.h>

void main()
{
    int units;
    float amount;

    const int surcharge = 15;
    const float slab1 = 1.2;
    const float slab2 = 1.8;
    const float slab3 = 2.0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if ((units > 0) && (units <= 199)) {
        amount = slab1 * units;
    } else if ((units >= 200) && (units <= 500)) {
        amount = slab2 * units;
    } else {
        amount = slab3 * units;
    }

    printf("Your amount: %.2f", amount);

    if (amount >= 400) {
        amount += (surcharge * amount) / 100;
        printf("\nAmount with %d percent surcharge is: %.2f\n", surcharge, amount);
    }
}
