#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int even_pairs = n * (n - 1) / 2;
    int odd_pairs = m * (m - 1) / 2;
    int total_pairs = even_pairs + odd_pairs;
    printf("%d", total_pairs);
    return 0;
}