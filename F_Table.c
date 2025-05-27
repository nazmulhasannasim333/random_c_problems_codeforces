#include <stdio.h>

int main() {
    long long id;
    scanf("%lld", &id);

    long long row = id / 4;
    long long col;
    if (row % 2 == 0) {
        col = id % 4;
    } else {
        col = 3 - (id % 4);
    }

    printf("%lld %lld\n", row, col);
    return 0;
}