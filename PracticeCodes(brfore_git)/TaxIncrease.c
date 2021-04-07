#include<stdio.h>

int main(){
  int A,B,flg=0;
  scanf("%d %d",&A,&B);
  for(int i = 1 ; i <= 1009 ; i++){
    if(floor(i*0.08) == A && floor(i*0.1) == B){
      printf("%d",i);
      flg++;
      break;
    }
  }
  if(flg == 0){
    printf("-1");
  }
  return 0;
}
