#include <stdio.h>

int main()
{
    long long A, B, K;
    scanf("%lld %lld %lld", &A, &B, &K);

    long long tom_eat = (A >= K) ? K : A;
    A -= tom_eat;
    K -= tom_eat;

    long long jerry_eat = (B >= K) ? K : B;
    B -= jerry_eat;

    printf("%lld %lld\n", A, B);
    return 0;
}