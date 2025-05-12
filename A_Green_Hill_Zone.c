#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int min_time = x;
    if (y < min_time)
    {
        min_time = y;
    }

    if (z < min_time)
    {
        min_time = z;
    }

    printf("%d", min_time);
    return 0;
}