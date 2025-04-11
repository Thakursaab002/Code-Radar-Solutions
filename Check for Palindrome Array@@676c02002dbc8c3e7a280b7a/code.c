#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[0]==arr[n])
        printf("YES");
        else {
            printf("NO");
        }
    }
    return 0;

}