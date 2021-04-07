#include<stdio.h>

void main(){
    int array[5] = {2,3,6,4,8};
    int max,min,sum;
    max = array[0];
    min = array[1];
    sum = 0;

    for(int i = 1; i < 5; i++){
        if(max < array[i]){
            max = array[i];
        }
    }

    for(int j = 0; j < 5; j++){
        if(min > array[j]){
            min =  array[j];
        }
    }
    printf("最小値 : %d\n",min);
    printf("最大値 : %d\n",max);

    for(int add = 0; add < 5; add++){
        if(array[add] == min || array[add] == max ){
            sum+=0;
        }else{
            sum+=array[add];
        }
    }
    printf("合計点数(最大点、最小点を除く) : %d\n",sum);
}