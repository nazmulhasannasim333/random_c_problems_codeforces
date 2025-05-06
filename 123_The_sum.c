#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);

    int f1 = 1, f2 = 1;
    int sum = 0;

    for (int i = 1; i <= k; i++)
    {
        if (i == 1)
        {
            sum += f1;
        }
        else if (i == 2)
        {
            sum += f2;
        }
        else
        {
            int next = f1 + f2;
            sum += next;
            f1 = f2;
            f2 = next;
        }
    }

    printf("%d\n", sum);

    return 0;
}