#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int isPalindrome = 1; 

for(int i = 0; i < n / 2; i++) {
    if(arr[i] != arr[n - 1 - i]) {
        isPalindrome = 0;
        break;
    }
}

if(isPalindrome) {
    printf("YES");  
} else {
    printf("NO");   
}


}