#include <stdio.h>

int main()
{
    long long int N;
    scanf("%lld", &N);
    long long int oddCount;
    if (N % 2 == 0)
    {
        oddCount = N / 2;
    }
    else
    {
        oddCount = (N + 1) / 2;
    }
    double probability = (double)oddCount / N;
    printf("%.6f\n", probability);

    return 0;
}