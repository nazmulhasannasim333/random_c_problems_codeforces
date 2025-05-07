#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int contestants = 3;
    int total_pastries = 4 * (n + contestants);

    printf("%d\n", total_pastries);
    return 0;
}