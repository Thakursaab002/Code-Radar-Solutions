#include <stdio.h>
#include <limits.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num & (1 << (sizeof(int) * CHAR_BIT - 1)))
        printf("Set\n");
    else
        printf("Not Set\n");
    return 0;
}
