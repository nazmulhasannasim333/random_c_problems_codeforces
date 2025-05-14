#include <stdio.h>
int log2(long long n)
{
    if (n == 0)
        return -1;
    const ans = log2(n / 2) + 1;
    return ans;
}

int main()
{
    long long n;
    scanf("%lld", &n);
    int result = log2(n);
    printf("%d\n", result);

    return 0;
}