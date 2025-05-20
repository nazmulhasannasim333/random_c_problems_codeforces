#include <stdio.h>

int main()
{
    long long n, a, b;
    scanf("%lld %lld %lld", &n, &a, &b);

    long long block = a + b;
    long long full_blocks = n / block;
    long long remaining = n % block;
    long long total_blue = full_blocks * a + (remaining < a ? remaining : a);
    printf("%lld\n", total_blue);
    return 0;
}