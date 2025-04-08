#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        int counttt = 0;
        for(int k = 0; k < i; k++) {
            if(arr[k] == arr[i]) {
                counttt = 1;
                break;
            }
        }
        
        if(counttt) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    printf("%d ", arr[i]);
                    break;  
                }
            }
        }
    }
    printf("%d",counttt);
}