#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int l = 0, r = n - 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            printf("%d ", a[l]);
            l++;
        } else {
            printf("%d ", a[r]);
            r--;
        }
    }
    return 0;
}