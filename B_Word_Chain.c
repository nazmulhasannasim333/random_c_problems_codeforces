#include <stdio.h>

int main()
{
    char a[101], b[101], c[101];
    scanf("%s %s %s", a, b, c);
    int a_len = strlen(a);
    int b_len = strlen(b);
    int c_len = strlen(c);

    if(b[0] == a[a_len - 1] && c[0] == b[b_len - 1])
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}