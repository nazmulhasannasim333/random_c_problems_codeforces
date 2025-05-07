#include<stdio.h>

int main(){
    int t, n;
    scanf("%d %d", &t, &n);
    if(t >= n){
        printf("Passed :)");
    }else{
        printf("Failed :(");
    }
    return 0;
}