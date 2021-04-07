#include<stdio.h>

int main(){

    int number;
    printf("”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
    scanf("%d",&number);


    for(int i = 1; i <= number; i++){
        if(number % i == 0)
            printf("%d ",i);
    }
    return 0;
}