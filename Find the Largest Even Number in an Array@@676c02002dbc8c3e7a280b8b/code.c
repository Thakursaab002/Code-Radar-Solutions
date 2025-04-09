#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

     int found_even = 0; 
    
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            found_even = 1;
            if(arr[i] > largest_even) {
                largest_even = arr[i];
            }
        }
    }

    printf("%d", found_even ? largest_even : -1);
    return 0;
}