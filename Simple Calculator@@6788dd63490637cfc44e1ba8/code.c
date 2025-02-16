#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    
    // Taking input from user
    if (scanf("%d %d %c", &num1, &num2, &op) != 3) {
        printf("error\n");
        return 1;
    }
    
    // Performing the operation based on the operator
    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("error\n");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("error\n");
    }
    
    return 0;
}
