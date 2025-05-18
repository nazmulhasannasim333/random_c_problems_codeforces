#include <stdio.h>

int main()
{
    int N, M, K;
    scanf("%d %d", &N, &M);
    scanf("%d", &K);
    for (int i = 0; i < K; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
    }
    if (K == N * M - 1)
    {
        printf("Let's Have Fun\n");
    }
    else
    {
        printf("Stay At Home\n");
    }
    return 0;
}