#include <stdio.h>

int main()
{
    long long A, B, T;
    scanf("%lld %lld %lld", &A, &B, &T);
    long long cycles = T / A;
    long long total = B * cycles;
    printf("%lld\n", total);

    return 0;
}   