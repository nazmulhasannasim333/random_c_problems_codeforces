#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long int x;
    int max_f = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &x);

        int current_f = 0;
        while (x % 2 == 0 && x > 0)
        {
            x /= 2;
            current_f++;
        }

        if (current_f > max_f)
        {
            max_f = current_f;
        }
    }

    printf("%d\n", max_f);

    return 0;
}