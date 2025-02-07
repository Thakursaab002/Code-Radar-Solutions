#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b); 
    if (a && b)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
