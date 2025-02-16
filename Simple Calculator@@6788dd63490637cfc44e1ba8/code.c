#include <stdio.h>

int main() {
    int a, b;
    char operator;
    scanf(" %c %d %d", &operator, &a, &b);

    if (operator == '+') {
        printf("%d + %d = %d\n", a, b, a + b);
    } else if (operator == '-') {
        printf("%d - %d = %d\n", a, b, a - b);
    } else if (operator == '*') {
        printf("%d * %d = %d\n", a, b, a * b);
    } else if (operator == '/') {
        if (b != 0) {
            printf("%d / %d = %d\n", a, b, a / b);
        } else {
            printf("Error: Division by zero\n");
        }
    } else {
        printf("Error: Invalid operator\n");
    }

    return 0;
}
