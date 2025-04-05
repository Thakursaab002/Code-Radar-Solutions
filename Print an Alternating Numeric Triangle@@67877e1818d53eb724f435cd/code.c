#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int bit = i % 2 == 0 ? 0 : 1; // Start with 1 for odd rows, 0 for even rows

        for (int j = 1; j <= i; j++) {
            printf("%d ", bit);
            bit = 1 - bit; // Toggle between 1 and 0
        }
        printf("\n");
    }

    return 0;
}
