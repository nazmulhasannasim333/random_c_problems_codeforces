#include <stdio.h>

int is_palindrome(int num) {
    int rev = 0, tmp = num;
    while (tmp > 0) {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }
    return rev == num;
}

int main() {
    int n, x, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (is_palindrome(x))
            count++;
    }
    printf("%d\n", count);
    return 0;
}