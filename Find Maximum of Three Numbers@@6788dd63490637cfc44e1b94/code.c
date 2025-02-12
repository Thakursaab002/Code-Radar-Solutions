#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three space-separated integers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
