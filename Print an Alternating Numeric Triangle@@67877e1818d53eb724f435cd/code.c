#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        int count;
        for(int j=0;j<=i;j++){
            printf("%d ",count%2==0);
            count++;
        }
        printf("\n");

    }
}