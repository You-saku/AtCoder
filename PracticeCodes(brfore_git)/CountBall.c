#include<stdio.h>

int main(void){
    long sum,blue,red,count,remain,ans;
    scanf("%ld%ld%ld",&sum,&blue,&red);

    count = sum/(red+blue);
    remain = sum%(red+blue);
    if(blue<remain){
        ans = blue*count+blue;
    }else{
        ans = blue*count+remain;
    }
    
    printf("%ld\n",ans);

    return 0;
}