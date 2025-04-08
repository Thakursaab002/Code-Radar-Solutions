#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int start = 0, end = n - 1;

    while (start < n - 1 && arr[start] <= arr[start + 1]) {
        start++;
    }

    if (start == n - 1) return 0;

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

    return end - start + 1;
}


