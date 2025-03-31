#include <stdio.h>

int fibonacciSeries(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci number at position %d is: %d\n", n, fibonacciSeries(n));
    return 0;
}
