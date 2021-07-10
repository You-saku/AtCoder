#include<iostream>

using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    int sum = 0;
    for(int i=1; i <= n; i++){
        int a;
        cin >> a;
        if(i%2==0){
            sum+=a-1;
        }else{
            sum+=a;
        }
    }

    if(sum > x){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    return 0;
}