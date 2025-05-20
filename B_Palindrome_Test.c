#include <stdio.h>
#include <string.h>

int main()
{
    char s[55];
    scanf("%s", s);
    int freq[26] = {0};
    for (int i = 0; s[i]; ++i)
    {
        freq[s[i] - 'a']++;
    }
    int odd = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] % 2)
        {
            odd++;
        }
    }
    if (odd <= 1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}