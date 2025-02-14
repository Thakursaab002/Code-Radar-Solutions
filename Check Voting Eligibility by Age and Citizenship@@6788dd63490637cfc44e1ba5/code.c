#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if (a>=18 || a==1){
        printf("Eligible");
    }
    else if(a==0){
        printf("Not Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}