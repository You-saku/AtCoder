#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    int count = 0;

    if(n!=1){
        int num = array[0];
        for(int j = 1; j < n; j++){
            if(array[j]<array[j-1]) count++;
        }
                
    }

    if(count==0 || count ==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
