#include <stdio.h>
struct employyee{
    int x;
    char y[50];
    float bonus;
};
int main(){
    int s;
    scanf("%d", &s);
    struct employyee bonus [s];
    for(int i=0;i<s;i++){
        scanf("%d %s %f",&bonus[i].x,&bonus[i].y,&bonus[i].bonus);
    }
    for(int i=0;i<s;i++){
        if(bonus[s].bonus<50000){
            bonus[s].bonus ==bonus[s].bonus * 0.1;
        }
        else{
            bonus[s].bonus == bonus[s].bonus *0.05;
        }
    }
    for(int i=0;i<s;i++){
        printf("Employee ID: %d, ",bonus[s].x);
        printf("Name: %c, ", bonus[s].y);
        printf("Bonus: %.2f\n",bonus[s].bonus);
    }
    return 0;

}