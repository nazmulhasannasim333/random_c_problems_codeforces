#include <stdio.h>

int main()
{
    int t, n, p, v;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int min_price = 2000;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &p, &v);
            int discounted = p - v;
            if (discounted < min_price)
            {
                min_price = discounted;
            }
        }
        printf("%d\n", min_price);
    }
    return 0;
}