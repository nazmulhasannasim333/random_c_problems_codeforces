#include <stdio.h>

int main()
{
    char a[22], b[22];
    scanf("%s %s", a, b);

    char lastDigitA = a[strlen(a) - 1];
    char lastDigitB = b[strlen(b) - 1];

    int digitA = lastDigitA - '0';
    int digitB = lastDigitB - '0';

    if ((digitA + digitB) % 2 == 0)
    {
        printf("Even.");
    }
    else
    {
        printf("Odd.");
    }

    return 0;
}