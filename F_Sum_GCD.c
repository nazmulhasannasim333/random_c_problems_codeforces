#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a % b != 0 || a < 2 * b) {
        printf("-1\n");
    } else {
        printf("%lld %lld\n", b, a - b);
    }
    return 0;
}