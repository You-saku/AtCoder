#include<stdio.h>

int main(void){
  long n;
  unsigned long long answer = 1;
  scanf("%d",&n);
  for(int i = 0; i < n; i++){
   long long num;
   scanf("%d",&num);
   answer = answer*num;
  }
  if(answer > 1000000000000000000){
    answer = -1;
  }
  printf("%d\n",answer);
  
 return 0; 
}