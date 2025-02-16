#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    float result;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2;
            } else {
                printf("Error: Division by zero!\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 1;

    printf("Result: %.2f\n", result);

    return 0;
}
