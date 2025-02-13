#include <stdio.h>

int main() {
    int costPrice, sellingPrice;
    printf("Enter the cost price and selling price separated by a space: ");
    scanf("%d %d", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        printf("Profit\n");
    } else if (sellingPrice < costPrice) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
