#include <stdio.h>
int main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int count=0;
    for(int i=o;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    printf("%d",count);
}