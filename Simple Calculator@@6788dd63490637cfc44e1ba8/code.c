#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(a==+){
         printf("%d + %d = %d", a, b, a + b);
    }
    else if(a==-){
        printf("%d - %d", a, b, a-b);
    }
    else if(a==*){
        printf("%d * %d", a, b, a*b);
    }
    else if(a==/){
        printf("%d / %d", a, b, a/b);
    }
    else {
        printf("Error");
    }
    return 0;
}