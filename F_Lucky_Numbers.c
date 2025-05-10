#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int tens = n / 10;
    int ones = n % 10;
    if (ones == 0 || (tens % ones == 0) || (ones % tens == 0))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}