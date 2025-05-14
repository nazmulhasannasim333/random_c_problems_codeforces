#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    long long sum = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }
    printf("%lld\n", sum);
    return 0;
}