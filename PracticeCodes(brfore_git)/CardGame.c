#include<stdio.h>

int main(void){

    int num,result;
    int point1,point2 = 0;

    void swap(int a[],int c,int d){
        int tmp;
        tmp = a[c];
        a[c] = a[d];
        a[d] = tmp;
    }

    scanf("%d\n",&num);
    int cards[num];
    for(int i = 0; i < num; i++){
        scanf("%d",&cards[i]);
    }
    for(int j = 0; j < num; j++){
        for(int k = j+1; k < num; k++){
            if(cards[j]<cards[k]){
                swap(cards,j,k);
            }
        }
    }
    for(int rounds = 0; rounds < num; rounds++){
        if(rounds%2 == 0) point1+=cards[rounds];

        if(rounds%2 == 1 ) point2+=cards[rounds];
    }
    
    result = point1-point2;
 
    printf("%d\n",result);

    /*for(int a = 0; a < num; a++){
        printf("%d ",cards[a]);
    }
    */
    return 0;
}