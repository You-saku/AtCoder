#include<stdio.h>

int main(void){
    unsigned char a,b,c,d,e,f;
    scanf("%c%c%c%c%c%c\n",&a,&b,&c,&d,&e,&f);
    if((c==d) && (e==f)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}