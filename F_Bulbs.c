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
    int max_on = 0, blue_moments = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_on)
        {
            max_on = a[i];
        }
        if (max_on == i + 1)
        {
            blue_moments++;
        }
    }
    printf("%d\n", blue_moments);
    return 0;
}