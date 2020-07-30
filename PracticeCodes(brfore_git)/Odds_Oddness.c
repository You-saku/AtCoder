#include<stdio.h>
int main(void){
    double count = 0;
    double output;
    int num;
    scanf("%d",&num);
    for(int i = 1; i <= num; i++){
        if(i%2==1){
            count++;
        }
    }
    output = count/num;
    printf("%f\n",output);
    return 0;
}