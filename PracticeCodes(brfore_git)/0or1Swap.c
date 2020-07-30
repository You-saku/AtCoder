#include <stdio.h>

int main(void){
    
    int n;
    scanf("%d",&n);

    int p[50];
    for(int i=1; i<=n; i++){
        scanf("%d",&p[i]);
    }

    int cnt = 0;
    
    for(int i=1; i<=n; i++){
        if(p[i]!=i){
            cnt++;
        }
    }

    if(cnt==2 || cnt==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
