#include <stdio.h>

int min(int arr[],int n){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int max(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("%d %d" ,min(arr,n),max(arr,n));
    return 0;
}