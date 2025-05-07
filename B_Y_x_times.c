#include <stdio.h>

int main()
{
    int y, x;
    scanf("%d %d", &y, &x);
    for (int i = 1; i <= x; i++)
    {
        printf("%d ", y);
    }
    return 0;
}