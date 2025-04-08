#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n;
    scanf("%d", &n);
    if (n < 2) {
        printf("-1");
        return 0;
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN, second_max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            second_max = max;
            max = arr[i];
        }
        else if(arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }
    printf(second_max == INT_MIN ? "-1" : "%d", second_max);
    return 0;
}