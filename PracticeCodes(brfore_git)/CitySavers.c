#include<stdio.h>

int main(void){

    int saver;
    int sum = 0;

    scanf("%d",&saver);
    int enemy[saver+1];
    int saver_attack[saver];

    for(int i = 0; i < saver+1; i++){
        scanf("%d",&enemy[i]);
    }

    for(int j = 0; j < saver; j++){
        scanf("%d",&saver_attack[j]);
    }

    for(int k = 0; k < saver; k++){ 
        while(saver_attack[k]!=0){
        for(int l = k; l <= k+1; l++){
                if(saver_attack[k]>=enemy[l]) {
                    sum+=enemy[l];
                    saver_attack[k]-=enemy[l];
                 }else{
                     enemy[l]-=saver_attack[k];
                     sum+=saver_attack[k];
                     saver_attack[k]-=saver_attack[k];
                     
                 }
            }
        }
    }
    printf("%d\n",sum);
    
    return 0;
}