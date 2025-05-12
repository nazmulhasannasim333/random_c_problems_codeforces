#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == 1)
        {
            printf("%d\n", b);
        }
        else if (a == 2)
        {
            printf("1\n");
        }
        else if (a == 3)
        {
            printf("0\n");
        }
    }
    return 0;
}