#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld", &a, &b);
    scanf("%lld %lld", &c, &d);

    long long score1 = a * 3 + b * 2;
    long long score2 = c * 3 + d * 2;

    if (score1 > score2)
        printf("Team 1 Wins\n");
    else if (score2 > score1)
        printf("Team 2 Wins\n");
    else
        printf("Tie\n");

    return 0;
}