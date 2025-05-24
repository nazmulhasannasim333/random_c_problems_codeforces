#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long l, r;
        scanf("%lld %lld", &l, &r);
        if (l == r)
        {
            printf("0 A\n");
        }
        else if (l < r)
        {
            printf("%lld L\n", r - l);
        }
        else
        {
            printf("%lld R\n", l - r);
        }
    }
    return 0;
}