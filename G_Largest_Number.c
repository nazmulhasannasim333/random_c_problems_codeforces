#include <stdio.h>

int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);

    long long x = n - (n % m);
    printf("%lld\n", x);

    return 0;
}