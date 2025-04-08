#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int start = 0, end = n - 1;

        while (start < n - 1 && arr[start] <= arr[start + 1]) {
            start++;
        }

        if (start == n - 1) {
            printf("0\n");
            continue;
        }

        while (end > 0 && arr[end] >= arr[end - 1]) {
            end--;
        }

        int min = arr[start], max = arr[start];
        for (int i = start; i <= end; i++) {
            if (arr[i] < min) min = arr[i];
            if (arr[i] > max) max = arr[i];
        }

        while (start > 0 && arr[start - 1] > min) {
            start--;
        }

        while (end < n - 1 && arr[end + 1] < max) {
            end++;
        }

        printf("%d\n", end - start + 1);
    }

    return 0;
}
