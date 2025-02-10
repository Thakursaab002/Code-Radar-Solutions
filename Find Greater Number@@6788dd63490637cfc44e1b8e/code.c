#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    if (a>b){
        printf("%d\n",a);
    }
    else if(b>a){
        printf("%d\n",b);
    }
    else{
        printf("0")
    }
    return 0;
}