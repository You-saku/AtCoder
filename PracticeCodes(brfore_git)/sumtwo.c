#include<stdio.h>

int main(void){
    double num;
    int count;
    scanf("%lf",&num);
    if(num == 1 || num == 2) {
        count = 0;
    }else{
        count = ((num-1.0-1.0)/2.0)+0.5;
    }
    
    printf("%d\n",count);
    return 0;
}