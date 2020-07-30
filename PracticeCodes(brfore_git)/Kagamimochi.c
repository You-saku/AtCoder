#include<stdio.h>

void swap(int *a,int n1,int n2){
    int tmp = a[n1];
    a[n1] = a[n2];
    a[n2] = tmp;
}

int main(void){
    int num;
    int count = 1;

    scanf("%d",&num);
    int array[num];
    for(int i = 0; i < num; i++){
        scanf("%d\n",&array[i]);
    }

    for(int j = 0; j < num; j++){
        for(int k = j+1; k < num; k++){
            if(array[j]<array[k]) swap(array,j,k);
        }
    }
    int max = array[0];
    for(int l = 1; l < num; l++){
        if(max > array[l]){
            max = array[l];
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}