#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[100005];
    scanf("%s", s);

    int count = 0;
    char prev = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != prev) {
            count++;
            prev = s[i];
        }
    }
    printf("%d\n", count);
    return 0;
}