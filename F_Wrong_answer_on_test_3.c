#include <stdio.h>

// this code working on vs code but not working on online judge

int main()
{
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    double result = ((double)A * B + C) / D;

    printf("%.9lf\n", result);

    return 0;
}