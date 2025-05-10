#include <stdio.h>
#include <string.h>

int main()
{
    char n[100001];
    long long x;

    scanf("%s %lld", n, &x);

    if (x == 1)
    {
        printf("Yes\n");
        return 0;
    }

    long long remainder = 0;
    for (int i = 0; i < strlen(n); i++)
    {
        int digit = n[i] - '0';
        remainder = (remainder * 10 + digit) % x;
    }

    if (remainder == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}