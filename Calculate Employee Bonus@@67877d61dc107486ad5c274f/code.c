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
        if(bonus[i].bonus<50000){
            bonus[i].bonus = bonus[i].bonus * 0.1;
        }
        else{
            bonus[i].bonus = bonus[i].bonus *0.05;
        }
    }
    for(int i=0;i<s;i++){
        printf("Employee ID: %d, ",bonus[i].x);
        printf("Name: %s, ", bonus[i].y);
        printf("Bonus: %.2f\n",bonus[i].bonus);
    }
    return 0;

}