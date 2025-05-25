#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int answers[105][105];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            scanf("%d", &answers[i][j]);

    for (int i = 0; i < N; ++i)
    {
        int score = 0;
        int streak = 0;
        for (int j = 0; j < M; ++j)
        {
            if (answers[i][j] == 1)
            {
                score += 20;
                streak++;
                if (streak >= 2)
                    score += 5;
            }
            else
            {
                score -= 10;
                streak = 0;
            }
        }
        printf("T%d : %d\n", i + 1, score);
    }
    return 0;
}