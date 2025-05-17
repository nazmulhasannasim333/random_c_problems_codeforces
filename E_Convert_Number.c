#include <stdio.h>

int main()
{
    int N, num;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);

        int add = num + 1;
        num = num - 2;

        if ((add % 2 == 1))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}