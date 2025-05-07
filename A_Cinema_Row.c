#include <stdio.h>

void find_direction(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int go_left = 1, go_right = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] > a[i])
            {
                go_left = 0;
                break;
            }
        }
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                go_right = 0;
                break;
            }
        }
        if (go_left && go_right)
        {
            printf("both\n");
        }
        else if (go_left)
        {
            printf("left\n");
        }
        else if (go_right)
        {
            printf("right\n");
        }
        else
        {
            printf("none\n");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    find_direction(a, n);
    return 0;
}