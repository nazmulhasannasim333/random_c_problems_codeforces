#include <stdio.h>

int main()
{
    int n, k, n1;
    scanf("%d %d %d", &n, &k, &n1);

    int carpets_per_side = (n + n1 - 1) / n1;
    int total_needed = carpets_per_side * carpets_per_side;

    if (k >= total_needed)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}