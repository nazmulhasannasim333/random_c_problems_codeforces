#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long n;
        scanf("%lld", &n);
        long long sum = n * (n + 1) / 2;
        long long p = 1;
        while (p <= n)
        {
            sum -= 2 * p;
            p *= 2;
        }
        printf("%lld\n", sum);
    }
    return 0;
}