#include <stdio.h>

int main()
{
    long long x, y;
    scanf("%lld %lld", &x, &y);
    if (y == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%lld\n", x % y);
    }
    return 0;
}