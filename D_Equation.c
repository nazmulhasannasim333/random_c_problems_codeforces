#include <stdio.h>

int main()
{
    long long int x, y, z;
    scanf("%lld %lld %lld", &x, &y, &z);
    long long int result = (x / z) * y;
    printf("%lld", result);

    return 0;
}