#include <stdio.h>
int main(){
    int arr[100];
    int n;
    int max=arr[0];
    int secondmax=-1;
    for(int i=0;i<=n;i++){
        scanf("%d",&arr);
        if(max<arr[i]){
            max=arr[i];
        }
        
    }
    for(int i=0;i<=n;i++){
        scanf("%d",&arr);
        if(secondmax<arr[i] && max!=arr[i]){
            secondmax=arr[i];
        }
    }
    printf("%d",secondmax);
}
