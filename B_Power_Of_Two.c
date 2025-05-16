#include <stdio.h>

int main()
{
    long long N;
    scanf("%lld", &N);

    long long total = 0;
    long long position = 0;

    while (N > 0)
    {
        if (N & 1)
        {
            total += position;
        }
        N >>= 1;
        position++;
    }

    printf("%lld\n", total);
    return 0;
}