#include <stdio.h>
int main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int duplicate=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        if(arr[i]==arr[j]){
            duplicate++;
            break;
        }
    }
    printf("%d",duplicate);
}