#include <stdio.h>

void main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if (((int)ch >= 48) && ((int)ch <= 57)) {
        printf("It is a number!");
    } else if (((int)ch >= 65) && ((int)ch <= 90)) {
        printf("It is a capital alphabet!");

    } else if (((int)ch >= 97) && ((int)ch <= 122)) {
        printf("It is a small alphabet!");
    }
}
