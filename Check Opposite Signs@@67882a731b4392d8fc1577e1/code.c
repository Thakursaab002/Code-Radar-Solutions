#include <stdio.h>
#include <stdbool.h>

bool haveOppositeSigns(int a, int b) {
    return ((a ^ b) < 0);
}

int main() {
    int a, b;
    printf("Enter two space-separated integers: ");
    scanf("%d %d", &a, &b);
    
    if (haveOppositeSigns(a, b)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
