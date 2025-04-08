#include <stdio.h>
int main(){
    int arr;
    scanf("%d",&arr);
    int arr[10];
    int max=arr[0];
    int secondmax=-1;
    for(int i=0;i<=9;i++){
        if(max<arr[i]){
            max+=arr[i];
        }
        
    }
    for(int i=0;i<=9;i++){
        if(secondmax<arr[i] && max!=arr[i]){
            secondmax+=arr[i];
        }
    }
    printf("%d",secondmax);
}
