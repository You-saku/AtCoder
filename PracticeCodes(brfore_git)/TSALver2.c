#include<stdio.h>

int main(void){
    int k,n,j,max,sum = 0;
    int dis[200005];
    int house[200005];

    scanf("%d %d",&k,&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&house[i]);
    }
    
    for(j = 0; j < n-1; j++){
        dis[j] = house[j+1]-house[j];
    }
    dis[j]=k-house[j];
    
    max = dis[0];
    for(int h = 1; h < n; h++){
        if(dis[h-1]<dis[h]){
            max=dis[h];
        }
    }
    for(int g = 0; g < n; g++){
        sum+=dis[g];
    }
    printf("%d",sum-max);
    
    return 0;
}