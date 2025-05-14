#include <stdio.h>

long long int sumM(int arr[], int i, int m)
{
    if (m == 0)
    {
        return 0;
    }
    long long res = sumM(arr, i - 1, m - 1) + arr[i];
    return res;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long int sum = sumM(arr, n - 1, m);
    printf("%lld\n", sum);
    return 0;
}