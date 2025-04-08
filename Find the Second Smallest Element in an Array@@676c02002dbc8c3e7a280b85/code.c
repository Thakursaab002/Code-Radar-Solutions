#include <stdio.h>

int main() {
    int arr[100], n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int small = arr[0]
    int second_smallest = -1;
    for(int i = 1; i < n; i++) {
        if(arr[i] < small) {
            second_smallest = small;
            small = arr[i];
        }
        else if(arr[i] > small && (second_smallest == -1 || arr[i] < second_smallest)) {
            second_smallest = arr[i];
        }
    }

    printf("%d", second_smallest);
    return 0;
}