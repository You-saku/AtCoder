#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    if(n<10) printf("%d",n);
    if(n>=10 && n<100) printf("%d",9);
    if(n>=100 && n<1000){
        int left1 = n-100+1;
        printf("%d",9+left1);
    }
    if(n>=1000 && n < 10000) printf("%d",909);
    if(n>=10000 && n < 100000){
        int left2 = n-10000+1;
        printf("%d",left2+909);
    }
    if(n==100000)printf("%d",90909);
    return 0;
}