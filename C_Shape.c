#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int stars = i <= N / 2 ? i + 1 : N - i;
        int spaces = N - 2 * stars;
        if (spaces < 0)
            spaces = 0;

        if (spaces == 0)
        {
            for (int j = 0; j < N; j++)
                printf("*");
        }
        else
        {
            for (int j = 0; j < stars; j++)
                printf("*");
            for (int j = 0; j < spaces; j++)
                printf(" ");
            for (int j = 0; j < stars; j++)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}