#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;  
    for (int i = 2; i * i <= n; i++) {
        if (n % 2 == 0) return 0;
    }
    return 1;  
}