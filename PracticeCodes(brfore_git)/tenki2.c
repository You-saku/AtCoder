#include<stdio.h>
#include<string.h>

int main(){

    char s[4];
    char t[4];
    gets(s);
    for(int i = 0; i < 4; i++){
        printf("%c\n",s[i]);
    }

    scanf("%c",&t);
    int len = strlen(s);
    for(int j = 0; j < len; j++){
        printf("%c\n",t[j]);
    }

    scanf("%c",&t);
    
    
    return 0;
}