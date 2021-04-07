#include<stdio.h>

int main(void){
    
    char array[3];
    for(int i = 0; i < 3; i++){
        scanf("%c",&array[i]);
    }
    
    if(array[0]==array[1] && array[1]==array[2]){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    
    return 0;
}