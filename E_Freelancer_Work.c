#include <stdio.h>

int main()
{
    int n, p;
    scanf("%d %d", &n, &p);
    int total = n * p;
    int rest = total * 0.8;
    printf("%d\n", rest);
    return 0;
}