#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int last_digit = abs(n % 10);
    printf("%d\n", last_digit);

    return 0;
}