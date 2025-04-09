#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int largest_elment=-1;
    for(int i=0;i<n;i++){
         if(arr[i] % 2 == 0 && (largest_elment == -1 || arr[i] > largest_elment)) {
            largest_elment=arr[i];
        }
    }
    printf("%d",largest_elment);
}