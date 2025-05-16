#include <stdio.h>

int main() {
    int n, q;
    scanf("%d", &n);
    
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &q);

    for (int k = 0; k < q; k++) {
        int i, j;
        scanf("%d %d", &i, &j);

        int temp = A[i - 1];
        A[i - 1] = A[j - 1];
        A[j - 1] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}