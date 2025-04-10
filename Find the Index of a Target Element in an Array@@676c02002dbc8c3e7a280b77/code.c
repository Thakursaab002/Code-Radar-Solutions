#include <stdio.>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    for(int i=0;i<n;i++){
        if(target=arr[i]){
            printf("%d",arr[i]);
            return 0;
        }
    }
    printf("-1");
}