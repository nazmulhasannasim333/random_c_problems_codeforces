#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    while (n >= 10)
    {
        n /= 10;
    }

    printf("%lld\n", n);

    return 0;
}