#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    long long divide = n / 7;
    long long division = n % 7;
    long long result = divide;
    if (division >= 5)
    {
        result++;
    }
    printf("%lld\n", result);
    return 0;
}