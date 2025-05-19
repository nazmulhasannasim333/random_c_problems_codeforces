#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    long long not_divisible = n - (n / 7);
    printf("%lld\n", not_divisible);
    return 0;
}