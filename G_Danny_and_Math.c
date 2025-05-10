#include <stdio.h>

int main() {
    long long B, C, D;
    scanf("%lld %lld %lld", &B, &C, &D);

    if (D >= C) {
        printf("-1\n");
        return 0;
    }

    long long B_mod = B % C;
    
    long long A = (D - B_mod + C) % C;

    if (A == 0) {
        A = C;
    }
    
    printf("%lld\n", A);
    return 0;
}