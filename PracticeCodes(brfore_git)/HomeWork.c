#include<stdio.h>
int main(void){
    
    int summer_vacation;
    int homeworks;
    int weihgt[10010];
    int homework_Times = 0;
    int Remain_vacation;

    scanf("%d%d",&summer_vacation,&homeworks);
    for(int i = 0; i < homeworks; i++){
        scanf("%d",&weihgt[i]);
        homework_Times += weihgt[i];
    }

    Remain_vacation=summer_vacation-homework_Times;
    if(Remain_vacation>=0){
        printf("%d\n",Remain_vacation);
    }else
    {
        printf("%d\n",-1);
    }
    
    return 0;
}