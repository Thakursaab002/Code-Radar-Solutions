#include <stdio.h>
int main(){
    int n,sum = 0;
    scanf("%d", &n);
    for(int i=1;i<=n; i++){
        printf("%d ", n);
        sum += n;
        printf("\nSum: %d\n", sum);
    } 
}