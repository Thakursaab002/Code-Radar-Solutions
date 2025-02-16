#include <stdio.h>

int main() {
    char operator;
    int a, b;
    scanf(" %c %d %d", &operator, &a, &b);
    
    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d / %d = %d\n", a, b, a / b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error");
            break;
    }
    
    return 0;
}
