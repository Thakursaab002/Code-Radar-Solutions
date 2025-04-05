#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int value = i % 2;  // Start with 1 for odd rows, 0 for even rows
        for (int j = 1; j <= i; j++) {
            printf("%d ", value);
            value = 1 - value;  // Toggle 0 <-> 1
        }
        printf("\n");
    }

    return 0;
}
