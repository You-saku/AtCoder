#include<stdio.h>

int main(void){
    int k,x;
    scanf("%d %d",&k,&x);
    for(int i = -(k-1); i <= k-1; i++){
        printf("%d ",x+i);
    }
    
    return 0;
}