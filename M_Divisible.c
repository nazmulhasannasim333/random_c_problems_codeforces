#include <stdio.h>
#include <string.h>

int main()
{
    char N[10001];
    int X;
    scanf("%s %d", N, &X);

    if (X == 0)
    {
        printf("NO\n");
        return 0;
    }

    long long remainder = 0;
    for (int i = 0; i < strlen(N); i++)
    {
        remainder = (remainder * 10 + (N[i] - '0')) % X;
    }

    if (remainder == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}