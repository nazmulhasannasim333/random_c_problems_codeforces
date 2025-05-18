#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n >= 3 && n % 3 == 0 && (n / 3) % 2 == 1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}