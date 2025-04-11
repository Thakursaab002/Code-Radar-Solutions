#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j<0;j--){
            if(arr[i]=arr[j]){
                printf("YES");
            }
        }
    }
    printf("NO");
    return 0;

}