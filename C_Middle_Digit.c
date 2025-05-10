#include <stdio.h>

int main()
{
    char n[11];
    scanf("%s", n);
    int length = strlen(n);
    printf("%c\n", n[length / 2]);
    return 0;
}