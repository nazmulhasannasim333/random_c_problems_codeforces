#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (n < 3)
    {
        printf("NO\n");
        return 0;
    }

    int i;
    for (i = 1; i < n && a[i] > a[i - 1]; i++)
        ;
    if (i == 1 || i == n)
    {
        printf("NO\n");
        return 0;
    }
    int j;
    for (j = i; j < n && a[j] < a[j - 1]; j++)
        ;
    if (j == n)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}