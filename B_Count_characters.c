#include <stdio.h>

int main()
{
    char str[100001];
    scanf("%s", str);
    int count[52] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count[str[i] - 'A' + 26]++;
        }
    }

    for (int i = 26; i < 52; i++)
    {
        if (count[i] > 0)
        {
            printf("%c %d\n", i + 'A' - 26, count[i]);
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c %d\n", i + 'a', count[i]);
        }
    }
    return 0;
}