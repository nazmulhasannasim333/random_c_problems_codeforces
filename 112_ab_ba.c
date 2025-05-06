#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    long long ab = pow(a, b);
    long long ba = pow(b, a);
    printf("%lld", ab - ba);
    return 0;
}