#include <stdio.h>
int main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            count++;
        }
    }
    printf("%d",count);
}