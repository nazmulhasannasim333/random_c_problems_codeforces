#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    if (a == b)
    {
        printf("%lld", a);
    }
    else if ((a + b) % 2 == 0)
    {
        printf("%lld", (a + b) / 2);
    }
    else
    {
        printf("IMPOSSIBLE");
    }
    return 0;
}