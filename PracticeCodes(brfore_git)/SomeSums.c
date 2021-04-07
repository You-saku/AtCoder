#include<stdio.h>

int main(void){

    int a,b,c,sum;
    sum = 0;

    scanf("%d %d %d",&a,&b,&c);

    for(int i = 1; i <= a; i++){
        int keta10000 = i/10000;
        int keta1000 = (i - keta10000*10000)/1000;
        int keta100 = (i - (10000*keta10000+1000*keta1000))/100;
        int keta10 = (i -(10000*keta10000+1000*keta1000+100*keta100))/10;
        int keta1 = i-(10000*keta10000+1000*keta1000+100*keta100+keta10*10);
        int keta_sum = keta10000+keta1000+keta100+keta10+keta1;
        if(keta_sum >= b && keta_sum <= c) sum+=i;
    }

    printf("%d\n",sum);
    return 0;
}