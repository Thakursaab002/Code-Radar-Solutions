#include <stdio.h>
int fibonacciseries(int n){
    if(n<=1)
        return n;
    else
        return fibonacciseries(n-1)+fibonacciseries(n-2);
}