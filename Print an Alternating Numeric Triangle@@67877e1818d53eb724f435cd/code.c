#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int count;
        for(int j=1;j<=i;j++){
            printf("%d ",count%2==0);
            count++;
        }
        printf("\n");

    }
}