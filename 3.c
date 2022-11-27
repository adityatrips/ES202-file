#include <stdio.h>

void main()
{
    for (int i = 0; i <= 6; i++) {
        for (int j = 0; i <= 5; i++) {
            if (!(i == 0 || i == 2)) {
                printf("#\n");
            }
            if (i == 0) {
                printf("#####\n");
            } else if (i == 2) {
                printf("#####\n");
            }
        }
    }
}
