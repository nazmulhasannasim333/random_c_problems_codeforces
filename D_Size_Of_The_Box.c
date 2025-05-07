#include <stdio.h>

int main()
{
    char c[20];
    scanf("%s", c);
    int len = strlen(c);
    printf("%c\n", c[len - 3]);
    return 0;
}