#include <stdio.h>

int main()
{
    long long N, M;
    scanf("%lld %lld", &N, &M);

    if (M == N)
    {
        printf("Accepted\n");
    }
    else
    {
        printf("Wrong Answer\n");
    }

    return 0;
}