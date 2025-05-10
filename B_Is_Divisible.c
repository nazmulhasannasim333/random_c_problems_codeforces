#include <stdio.h>

int main()
{
    long long n, A, B;
    scanf("%lld %lld %lld", &n, &A, &B);
    long long divisor = A + B;
    long long count = n / divisor;
    printf("%lld\n", count);

    return 0;
}