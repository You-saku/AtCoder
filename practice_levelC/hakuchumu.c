#include<stdio.h>
#include<string.h>
//入力 dream dreamer erase eraser
//逆 maerd remaerd esare resare

int main(void){
    char moji[100000];
    gets(moji); //文字列を一気に格納
    //printf("%d\n",strlen(moji));
    //printf("%c\n",moji[0]); //一文字処理
    int words = strlen(moji)-1;
    while(words != -1){
        if(moji[words]=="m" && moji[words-1]=="a" && moji[words-2]=="e" && moji[words-3]=="r" && moji[words-4]=="d"){
            words-=5;
        } else if(moji[words] == "r" && moji[words-1] == "e" && moji[words-2] == "m" && moji[words-3] == "a" && moji[words-4] == "e" && moji[words-5] == "r" && moji[words-6] == "d"){
            words-=7;
        } else if(moji[words] == "e" && moji[words-1] == "s" && moji[words-2] == "a" && moji[words-3] == "r" && moji[words-4] == "e"){
            words-=5;
        } else if(moji[words] == "r" && moji[words-1] == "e" && moji[words-2] == "s" && moji[words-3] == "a" && moji[words-4] == "r" && moji[words-5] == "e"){
            words-=6;
        }else{
            break;
        }
    }

    if(words<=0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    //printf("%s",&moji[0]);
    return 0;
}
