#include<stdio.h>
#include<stdbool.h>

int main(void){
    int num;
    int count = 0;
    int count2 = 0;
    bool flag = false;
    scanf("%d",&num);
    int array[num];
    for(int i = 0; i < num; i++){
        scanf("%d",&array[i]);
    }
    for(int j = 0; j < num; j++){
        if(array[j]%2==1)
        count++;
    }
    if(count==0){
        while(flag == 0){
            for (int k = 0; k < num; k++)
            {
                array[k]/=2;
                if((array[k]%2)==1) flag = true; 
            }
            count2++;
        }
    }
    printf("%d",count2);
    return 0;
}