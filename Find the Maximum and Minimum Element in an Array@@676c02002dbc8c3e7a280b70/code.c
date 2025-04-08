#include <stdio.h>
int main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%d",arr[i]);
    }
    int max=0;
    intmin=0;
    for(int i=0;i<=n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<=n;i++){
        if(min<arr[i]){
            min=arr[i];
        }
    }
    printf("%d %d",max,min);
}