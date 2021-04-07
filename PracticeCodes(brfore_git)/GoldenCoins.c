#include<stdio.h>

int main(void){
    int money;
    int a,b,c,d,e,f;
    int prize1000;
    int prize5;
    scanf("%d\n",&money);
    prize1000 = money/500;
    int sub1 = money%500;
    prize5 = sub1/5;
    int answer = 1000*prize1000+5*prize5;
    printf("%d\n",answer);

    return 0;
}