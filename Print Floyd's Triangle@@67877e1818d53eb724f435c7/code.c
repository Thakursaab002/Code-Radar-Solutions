#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            count++;
        }
        printf("\n");
    }
}