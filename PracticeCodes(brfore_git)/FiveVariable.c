#include<stdio.h>

int main(void){

    int x[5];
    int check = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d\n",&x[i]);
        if(x[i]==0) check = i;
    }
    
    printf("%d\n",check+1);
    return 0;
}