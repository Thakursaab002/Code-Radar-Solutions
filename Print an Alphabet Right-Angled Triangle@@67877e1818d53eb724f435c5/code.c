#include<stdio.h>
int main(){
    char n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%c",j);
        }
    }
}