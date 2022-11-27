#include <stdio.h>

void main()
{
    char dec;
    float op1, op2;

    printf("[A]ddition");
    printf("\n[S]ubtraction");
    printf("\n[M]ultiplication");
    printf("\n[D]ivision");
    printf("\nM[O]dulus");

    printf("\nEnter operator: ");
    scanf("%c", &dec);

    printf("Enter operand one: ");
    scanf("%f", &op1);
    printf("Enter operand two: ");
    scanf("%f", &op2);

    switch (dec) {
    case 'A':
        printf("\n%.2f + %.2f = %.2f", op1, op2, (op1 + op2));
        break;
    case 'S':
        printf("\n%.2f - %.2f = %.2f", op1, op2, (op1 - op2));
        break;
    case 'M':
        printf("\n%.2f * %.2f = %.2f", op1, op2, (op1 * op2));
        break;
    case 'D':
        if (op2 == 0) {
            printf("ZeroDivisionError");
            break;
        }
        printf("\n%.2f / %.2f = %.2f", op1, op2, (op1 / op2));
        break;
    case 'O':
        printf("\n%d mod %d = %d", (int)op1, (int)op2, ((int)op1 % (int)op2));
        break;
    }
}
