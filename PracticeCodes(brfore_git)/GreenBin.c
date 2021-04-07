#include<stdio.h>

int main(void){
    int n,count;
    int count2 = 0;

    scanf("%d",&n);
    char moji[n][100];
    for(int i = 0; i < n; i++){
        scanf("%s",&moji[i]);
    }

    for(int j = 0; j < n-1; j++){
        count = 0;
        for(int m = j+1; m < n; m++){
            count = 0;
            for(int k = 0; k < 10;k++){
                for(int l = 0; l < 10; l++){
                    if(moji[j][k]==moji[m][l]){ count++; break;}
                }
                if(count==10) count2++;        
            }
        }
    }
    printf("%d",count2);

    return 0;
}