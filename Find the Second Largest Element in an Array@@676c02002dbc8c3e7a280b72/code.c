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
    int secondmax = arr[0];
    int found = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] != max) {
            if(!found) {
                secondmax = arr[i];
                found = 1;
            }
            else if(arr[i] > secondmax) {
                secondmax = arr[i];
            }
        }
    }

    printf(found ? "%d" : "-1", secondmax);
    return 0;
}