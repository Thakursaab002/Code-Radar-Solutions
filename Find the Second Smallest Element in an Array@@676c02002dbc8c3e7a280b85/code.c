#include <stdio.h>

int main() {
    int arr[100], n;
    scanf("%d", &n);
    
    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0], second_smallest = -1;
    
    // Find smallest and second smallest
    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && (second_smallest == -1 || arr[i] < second_smallest)) {
            second_smallest = arr[i];
        }
    }

    printf("%d", second_smallest);
    return 0;
}