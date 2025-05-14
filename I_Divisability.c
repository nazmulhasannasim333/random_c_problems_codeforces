#include <stdio.h>

int main()
{
    long long A, B, X;
    scanf("%lld %lld %lld", &A, &B, &X);

    if (A > B)
    {
        long long temp = A;
        A = B;
        B = temp;
    }

    long long first = (A % X == 0) ? A : (A + (X - A % X));

    long long last = (B % X == 0) ? B : (B - B % X);

    if (first > last)
    {
        printf("0\n");
        return 0;
    }

    long long count = (last - first) / X + 1;
    long long sum = count * (first + last) / 2;

    printf("%lld\n", sum);

    return 0;
}