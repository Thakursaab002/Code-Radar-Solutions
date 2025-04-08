#include <stdio.h>

int main() {
    int arr[100];
    int n;
    scanf("%d", &n);
    
    if (n < 2) {
        printf("-1");
        return 0;
    }

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int secondmax = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            secondmax = max;
            max = arr[i];
        }
        else if(arr[i] > secondmax && arr[i] < max) {
            secondmax = arr[i];
        }
    }

    printf("%d", secondmax);
    return 0;
}