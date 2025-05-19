#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int division = y / 2;
    int total = x + division;
    printf("%d\n", total);
    return 0;
}