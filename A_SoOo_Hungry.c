#include <stdio.h>

int main() {
    long long X, Y;
    scanf("%lld %lld", &X, &Y);
    long long minutes = (X + Y - 1) / Y;
    printf("%lld\n", minutes);
    return 0;
}