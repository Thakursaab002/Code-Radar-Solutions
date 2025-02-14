#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if (a>1 || a<101){
        printf("In Range");
    }
    else if(a==0 || a==101){
        printf("Out of Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}