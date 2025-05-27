#include <stdio.h>

int main() {
    int n, a[21];
    scanf("%d", &n);
    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    int ans = 0;
    int total = 1 << n;

    for(int mask = 1; mask < total; ++mask) {
        int even = 0, odd = 0;
        for(int i=0; i<n; ++i) {
            if(mask & (1<<i)) {
                if(a[i] % 2 == 0) ++even;
                else ++odd;
            }
        }
        if(even > odd) ++ans;
    }
    printf("%d\n", ans);
    return 0;
}