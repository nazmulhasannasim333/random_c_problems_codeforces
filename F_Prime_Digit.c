#include <stdio.h>

int main() {
    char n[21];
    int count = 0;
    scanf("%s", n);
    for (int i = 0; n[i]; i++) {
        if (n[i] == '2' || n[i] == '3' || n[i] == '5' || n[i] == '7')
            count++;
    }
    printf("%d\n", count);
    return 0;
}