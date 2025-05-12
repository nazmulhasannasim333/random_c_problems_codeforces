#include <stdio.h>

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (int i = 0; i < q; i++)
    {
        long long int x;
        scanf("%lld", &x);
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] > x)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}