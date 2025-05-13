#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    int count = 0;

    scanf("%s", s);

    int length = strlen(s);

    for (int i = 0; i <= length - 4; i++)
    {
        if (s[i] == 'B' && s[i + 1] == 'e' && s[i + 2] == 'B' && s[i + 3] == 'e')
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}