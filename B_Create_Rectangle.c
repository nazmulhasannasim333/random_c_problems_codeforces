#include<stdio.h>

int main(){
    long long l, w, h;
    scanf("%lld %lld %lld", &l, &w, &h);
    long long p = 2 * (w + h);
    long long res = l / p;
    printf("%lld\n", res);
    return 0;
}