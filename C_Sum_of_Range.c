#include <stdio.h>

long long sumFrom1ToN(long long n)
{
    return n * (n + 1) / 2;
}

long long sumEvenFrom1ToN(long long n)
{
    long long count = n / 2;
    return count * (count + 1);
}

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    if (a > b)
    {
        long long temp = a;
        a = b;
        b = temp;
    }

    long long sum_all = sumFrom1ToN(b) - sumFrom1ToN(a - 1);

    long long sum_even = sumEvenFrom1ToN(b) - sumEvenFrom1ToN(a - 1);

    long long sum_odd = sum_all - sum_even;

    printf("%lld\n", sum_all);
    printf("%lld\n", sum_even);
    printf("%lld\n", sum_odd);

    return 0;
}